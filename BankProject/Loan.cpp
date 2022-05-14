#include <string>
#include "Loan.h"
#include <ctime>
#include <iostream>
#include "Bank.h"
#include <iostream>
#include "Exception.h"

using namespace System::Windows::Forms;
using System::String;

vector<int64_t> Loan::_allSerialNum;

Loan::Loan(const int64_t& natCode, const int64_t& accNum, const int64_t& lAmount, const LoanType& lt, Bank* bank, int64_t serialNum) // constructor
{
    time_t now = time(0);
    tm* ltm = localtime(&now); // now time system

    _dateReceived = Date(1 + ltm->tm_mon, ltm->tm_mday, 1900 + ltm->tm_year); // format : month / day / year
    _loanAmount = lAmount;
    _loanType = lt;
    setSerialNum(serialNum); // set serial number
    _accNumber = accNum;
    _loanInterest = (lt * _loanAmount) / 100;
    _loanAmount += _loanInterest;
    _allInstallments = lt * 3;
    _bank = bank;
    _nationalCode = natCode;
    _paidLoanAmount = 0;
    calcAmountInstallments(); // calculate amount installment's
    _paidInstallments = 0;
    _overdueInstallments = 0;
    _daysAfterPaidLoan = 0;
    _forfeit = 0;
}

Loan::Loan(const Loan& loan) // copy constructor
{
    *this = loan;
}

void Loan::calcAmountInstallments()  // calculate amount installment's
{
    _amountInstallments = (_loanInterest + _loanAmount) / _allInstallments;
}

string Loan::warningSMS() const // show warning sms to client
{
    string out = "Account number: " + to_string(_accNumber);
    out += " balance today is not enough to pay off the loan. Your account will be blocked if you continue the process\n";
    return out;
}

void Loan::withdrawalLoan() // withdraw daily installment
{
    if ((_loanAmount - _paidLoanAmount) < _amountInstallments)
        _amountInstallments = (_loanAmount - _paidLoanAmount);

    time_t now = time(0);
    string nowDateAndTime(asctime((localtime(&now))));
    nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);

    try
    {
        _bank->withdrawIns(_accNumber, _amountInstallments);

        if (_overdueInstallments != 0)
        {
            --_overdueInstallments;
            if (_overdueInstallments == 0)
            {
                _bank->activeAllAcc(_nationalCode);
                MessageBox::Show("All accounts with this national code  " + _nationalCode + " actived!");

                string report = "All accounts with this national code ";
                report += to_string(_nationalCode);
                report += " on " + nowDateAndTime + " actived.";

                _bank->addReport(report); // add a report   
            }
        }
        else
            _paidInstallments++;

        _paidLoanAmount += _amountInstallments;
    }
    catch (Exception ex)
    {
        String^ str = gcnew String(warningSMS().c_str());
        if (_overdueInstallments == 1)
            MessageBox::Show(str);
        _overdueInstallments++;
        _forfeit += 1e5;
        _loanAmount += _forfeit;

        if (_overdueInstallments == 2)
        {
            _bank->deActivateAllAcc(_nationalCode);
            MessageBox::Show("All accounts with this national code " + _nationalCode + " deactived!");

            string report = "All accounts with this national code ";
            report += to_string(_nationalCode);
            report += " on " + nowDateAndTime + " deactived.";

            _bank->addReport(report); // add a report   
        }
    }
}

int64_t Loan::getAccNumber() const { return _accNumber; } // return account number
Date Loan::getDateReceived() const { return _dateReceived; } // return date recieved loan
int64_t Loan::getLoanAmount() const { return _loanAmount; } // return amount loan
int64_t Loan::getLoanInterest() const { return _loanInterest; } // return interest loan
int Loan::getAllInstallments() const { return _allInstallments; } // return all installment's
int64_t Loan::getAmountInstallments() const { return _amountInstallments; } // return amount installment's
int Loan::getPaidInstallments() const { return _paidInstallments; } // return paid installment's
int Loan::getOverdueInstallments() const { return _overdueInstallments; } // return overdu installment's
int64_t Loan::getSerialNumber() const { return _loanSerialNumber; } // return serial number of loan
int64_t Loan::getForfeit() const { return _forfeit; } // return forfeit
int64_t Loan::getNatCode() const { return _nationalCode; }

ostream& operator<<(ostream& out, const Loan& loan) // overloading << operator
{
    out << "Account number: " << loan.getAccNumber() << '\n'
        << "Date received: " << loan.getDateReceived() << '\n'
        << "Loan amount: " << loan.getLoanAmount() << '\n'
        << "Loan Interset: " << loan.getLoanInterest() << '\n'
        << "All installments: " << loan.getAllInstallments() << '\n'
        << "Amount installments: " << loan.getAmountInstallments() << '\n'
        << "Paid installments: " << loan.getPaidInstallments() << '\n'
        << "Overdu installments: " << loan.getOverdueInstallments() << '\n'
        << "Serial number of loan: " << loan.getSerialNumber() << '\n'
        << "Forfeit: " << loan.getForfeit() << '\n'
        << "- - - - - - - - - - - -" << endl;
    return out;
}

Loan& Loan::operator=(const Loan& loan) // overloding = operator
{
    _dateReceived = loan._dateReceived;
    _loanAmount = loan._loanAmount;
    _loanType = loan._loanType;
    _loanSerialNumber = loan._loanSerialNumber;
    _accNumber = loan._accNumber;
    _loanInterest = loan._loanInterest;
    _allInstallments = loan._allInstallments;
    _bank = loan._bank;
    _amountInstallments = loan._amountInstallments;
    _paidInstallments = loan._paidInstallments;
    _overdueInstallments = loan._overdueInstallments;
    _nationalCode = loan._nationalCode;

    return *this;
}
void Loan::setSerialNum(const int64_t& serialNum) // set serial number
{
    if (serialNum < 0)
        throw Exception("Wrong! serial number should not negative\n"); // throw an exception
    else if (serialNum > 0)
    {
        if (!checkSerialNum(serialNum))
            throw Exception("serial number is repeted");// throw an exception
        _loanSerialNumber = serialNum;
        _allSerialNum.push_back(serialNum);
        return;
    }

    srand(time(0));
    bool check = true;
    int64_t num;
    do {
        num = (rand() % (int)1e5) + 1e7;
        check = checkSerialNum(num);
    } while (!check);
    _loanSerialNumber = num;
}

bool Loan::checkSerialNum(const int64_t& serialNum) // check serial number
{
    for (auto i : _allSerialNum)
        if (i == serialNum)
            return false;
    return true;
}

void Loan::incOneDay() // increase one day
{
    ++_daysAfterPaidLoan;
    // Date::maxDayForMonth()
    // if(_daysAfterPaidLoan%30 == 0)
    //     withdrawalLoan();
    if (_loanAmount > 0)
        withdrawalLoan();
}