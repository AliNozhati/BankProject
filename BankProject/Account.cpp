#include <string>
#include <iostream>
#include <vector>
#include <ctime>
#include "Account.h"
#include "Exception.h"
#include "Client.h"
#include "Bank.h"
using namespace std;
using namespace System::Windows::Forms;

vector<int64_t> Account::_allAccNum;

Account::Account(const int64_t& natCode, Bank* bank, const int64_t& blnc, int64_t accNum) // constructor
{
    time_t now = time(0);
    const tm* ltm = localtime(&now); // now time system

    _openAccDate = Date(1 + ltm->tm_mon, ltm->tm_mday, 1900 + ltm->tm_year); // format : month / day / year

    setBalance(blnc); // set balance
    _nationalCode = natCode;
    _bank = bank;
    _active = true;
    _activeDays = 0;
    _isLoanAccepted = false;
    _isLoanRequested = false;
    _greatBalDays = 0;

    setAccNum(accNum); // set account number
    string nowDateAndTime(asctime(ltm));
    nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);

    string report = "Account with account number ";
    report += to_string(_accountNumber);
    report += " and natoinal code ";
    report += to_string(natCode);
    report += " was created on ";
    report += nowDateAndTime;
    report += " , ";
    report += "with an primitive balance of " + to_string(blnc);

    _bank->addReport(report);
}

Account::Account(const Account& acc) // copy constructor
{
    _openAccDate = acc._openAccDate;
    setBalance(acc.getBalance()); // set balance
    _nationalCode = acc._nationalCode;
    _bank = acc._bank;
    _active = acc._active;
    _activeDays = acc._activeDays;
    _isLoanAccepted = acc._isLoanAccepted;
    _isLoanRequested = acc._isLoanRequested;
    _accountNumber = acc._accountNumber;
    _greatBalDays = acc._greatBalDays;
}

int64_t Account::getBalance() const // return balance
{
    return _balance;
}

int64_t Account::getAccNumber() const // return account number
{
    return _accountNumber;
}

int64_t Account::getNatCode() const // return national code
{
    return _nationalCode;
}

void Account::requestLoan() // apply for a loan
{
    _isLoanRequested = true;
}

bool Account::getReqLoan() const // return status request loan
{
    return _isLoanRequested;
}

bool Account::getAccLoan() const // return status accsept loan
{
    return _isLoanAccepted;
}

int64_t Account::getActiveDays() const // return active days
{
    return _activeDays;
}

int64_t Account::getGreatBalDays() const // return great balance days
{
    return _greatBalDays;
}

Date Account::getOpenAccDate() const// return date opening account
{
    return _openAccDate;
}

bool Account::isActive() const // checking activating account
{
    return _active;
}

void Account::withdraw(const int64_t& money) // withdraw money
{
    if (!_active)
    {
        MessageBox::Show("Your acount is not active!\n"); // throw an exception
        return;
    }
        
    if (money > _balance) // condition
    {
        MessageBox::Show("Balance is not enough!\n"); // throw an exception
        return;
    }
    _balance -= money;

    time_t now = time(0);
    string nowDateAndTime(asctime((localtime(&now))));
    nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);

    string report = "Account with account number ";
    report += to_string(_accountNumber);
    report += " on " + nowDateAndTime + " , ";
    report += "the amount of " + to_string(money) + "withdrawals.";

    _bank->addReport(report);
}

void Account::deposit(const int64_t& money) // deposit money
{
    if (money <= 0) // Check the deposit amount 
    {
        MessageBox::Show("Please enter a correct value!\n"); // throw an exception
        return;
    }
        
    _balance += money;

    time_t now = time(0);
    string nowDateAndTime(asctime((localtime(&now))));
    nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);

    string report = "Account with account number ";
    report += to_string(_accountNumber);
    report += " on " + nowDateAndTime + " , ";
    report += "added the amount of " + to_string(money) + "to her account.";

    _bank->addReport(report);
}

void Account::setBalance(const int blnc) // set balanace
{
    if (blnc < 0) // condition
    {
        MessageBox::Show("Please enter a correct value!\n"); // throw an exception
        return;
    }
        
    _balance = blnc;

}

void Account::incOneDay() // increase active days
{
    ++_activeDays;
    if (_balance > 1e6)
    {
        _greatBalDays++;
    }
}

Account& Account::operator=(const Account& acc) // overloding = operator
{
    _bank = acc._bank;
    _nationalCode = acc._nationalCode;
    _accountNumber = acc._accountNumber;
    _balance = acc._balance;
    _activeDays = acc._activeDays;
    _active = acc._active;
    _isLoanRequested = acc._isLoanRequested;
    _isLoanAccepted = acc._isLoanAccepted;
    _openAccDate = acc._openAccDate;

    return *this;
}

ostream& operator<<(ostream& out, const Account& acc) // overloading << operator
{
    out << "National code: " << acc.getNatCode() << '\n'
        << "Account number: " << acc.getAccNumber() << '\n'
        << "Balance: " << acc.getBalance() << '\n'
        << "Number of active days of the account: " << acc.getActiveDays() << '\n'
        << "Account opening date: " << acc.getOpenAccDate() << endl;

    return out;
}

void Account::setAccNum(int64_t& accNum) // set account number
{
    if (accNum < 0)
        throw Exception("Wrong! account number should not negative\n");// thow an exception
    else if (accNum > 0)
    {
        if (!checkAccNum(accNum))
            throw Exception("account number is repeted"); // thow an exception
        _accountNumber = accNum;
        _allAccNum.push_back(accNum);
        return;
    }

    srand(time(0));
    bool check = true;
    int64_t num;
    do {
        num = rand() + 1;
        check = checkAccNum(num);
    } while (!check);
    _accountNumber = num;
}

bool Account::checkAccNum(const int64_t& accNum) // check that account exist or not
{
    for (auto i : _allAccNum)
        if (i == accNum)
            return false;
    return true;
}