#include <iostream>
#include "Facility.h"
#include "Bank.h"

using namespace System::Windows::Forms;
using System::String;

using namespace std;

Facility::Facility(const string& name, const string& lname, const Date& bdate, const int64_t& natCode, // Person
    const string& user, const string& pass,   // Id
    Bank* bank,  // Bank
    const int64_t& baseSal, const int64_t& persNum) // Employee
    : Employee(name, lname, bdate, natCode, user, pass, bank, baseSal, persNum) {}

Facility::Facility(const Facility& fac) // copy constructor
    : Employee(fac)
{}

void Facility::deActivateAllAcc(const int64_t& natCode) // deactive all account's
{
    _bank->deActivateAllAcc(_personnelNumber, natCode);
}

vector<Account*> Facility::getReqLoans() // return request loan's
{
    return _bank->getAccsReqLoans(_personnelNumber);
}

void Facility::showAllReqLoan() // show all request loan
{
    vector<Account*> reqsList = getReqLoans();

    int size = reqsList.size();

    if (size == 0)
        MessageBox::Show("There isn't any request for a loan!");
    //else
        //for (auto i : reqsList)
            //MessageBox::Show("" + *i);
}

void Facility::reviewReqLoan(int i)
{
    vector<Account*> requests = getReqLoans();
    if (_bank->getToDayLoanStatus(_personnelNumber)) // Today is not paied any loan 
    {
        MessageBox::Show("Today loan has been paid!");
        return;
    }
    int64_t amountLoan = requests[i]->getGreatBalDays() * requests[i]->getBalance();
    if (_bank->addLoan(_personnelNumber, requests[i], amountLoan))
    {
        requests[i]->deposit(amountLoan);
    }
    else
        MessageBox::Show("Loan request rejected!");
  /*  for (auto i : requsts)
    {
        int64_t amountLoan = i->getGreatBalDays() * i->getBalance();
        if (_bank->addLoan(_personnelNumber, i, amountLoan))
        {
            i->deposit(amountLoan);
            break;
        }
    }*/
}

Loan Facility::viewLoanStatus(const int64_t& serialNum) // view loan status with receave serial numbers of loan
{
    Loan* loan = _bank->getLoan(serialNum);

    if (loan == nullptr)
        MessageBox::Show("This serial number has not any loan");
    else
        return *loan;
    //MessageBox::Show("" + *loan);
}


ostream& operator<<(ostream& out, const Facility& fac) // overloading << operator
{
    const Employee* p = &fac;
    out << *p << "\n";

    return out;
}