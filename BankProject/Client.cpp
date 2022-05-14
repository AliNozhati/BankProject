#include <iostream>
#include <vector>
#include <string>
#include "Exception.h"
#include "Client.h"
#include "User.h"
#include "Loan.h"
#include "Bank.h"

using namespace System::Windows::Forms;
using System::String;

using namespace std;

Client::Client(const string& name, const string& lname, const Date& bdate, const int64_t& natCode, // Person
    const string& username, const string& pass, // User
    Bank* bank) // Bank
    : Person(name, lname, bdate, natCode), // constructor of person
    User(username, pass) // constructor of User
{
    _bank = bank;
}

Client::Client(const Person& person, const string& user, const string& pass, Bank* bank) // constructor
    : Person(person), // person
    User(user, pass) // user
{
    _bank = bank;
}

Client::Client(const Client& cl) // copy constructor
    : Person(cl),// person
    User(cl)  // user
{}

void Client::requestLoan(const int64_t accNumber, const LoanType& lt) // apply for a loan
{
    Account* acc = getAcc(accNumber);
    if (acc == nullptr)
    {
        MessageBox::Show("doesn't exist account number.");
        return;
    }
    if (acc->getReqLoan())
    {
        MessageBox::Show("You have been applyed for a loan!");
        return;
    }
    if (acc->getBalance() < 1000000)
    {
        MessageBox::Show("Your Balance is not enough for applying!");
        return;
    }

    Request::addReqLoan(acc, lt);
    MessageBox::Show("Loan requested", "loan");

    time_t now = time(0);
    string nowDateAndTime(asctime((localtime(&now))));
    nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);

    string report = "Account with account number ";
    report += to_string(accNumber);
    report += " on " + nowDateAndTime;
    report += "has request a loan.";

    _bank->addReport(report);
}

bool Client::loanTracking(const int64_t accNumber) // loan tracking
{
    return getAcc(accNumber)->getReqLoan();
}

void Client::withdraw(const int64_t accNumber, const int64_t& money) // withdrow money
{
    getAcc(accNumber)->withdraw(money);
}

void Client::deposit(const int64_t accNumber, const int64_t& money) // deposit money
{
    getAcc(accNumber)->deposit(money);
}

int64_t Client::getBalance(const int64_t accNumber) // reutn balance
{
    return getAcc(accNumber)->getBalance();
}

const vector<Account*> Client::getAccList() const // return vector of account
{
    vector<Account*> acc = _bank->getAccList(_nationalCode);
    if (acc.size() == 0)
        throw Exception("You don't have any acount!\n"); // throw an exception
    return acc;
}

Account* Client::getAcc(const int64_t accNumber) const // retunn an account
{
    Account* acc = _bank->getAcc(accNumber);
    //if (acc == nullptr)
    //    throw Exception("Account number is not correct!\n"); // throw an exception
    return acc;
}

const vector<Loan*> Client::getLoans() const // return vector of loan
{
    vector<Loan*> loans = _bank->getLoans(_nationalCode);
    int size = loans.size();
    if (size == 0)
        MessageBox::Show("You don't have any loan\n");
    return loans;
}

const Loan* Client::getLoan(const int64_t& serialNum) const // return a loan
{
    return _bank->getLoan(serialNum);
}

Client& Client::operator=(const Client& cl) // overloding = operator
{
    _name = cl._name;
    _lastname = cl._lastname;
    _nationalCode = cl._nationalCode;
    _bdate = cl._bdate;
    _username = cl._username;
    _password = cl._password;

    return *this;
}

ostream& operator<<(ostream& out, const Client& cli) // overloading << operator
{
    out << "The list of account's:\n\n";
    vector<Account*> accs = cli.getAccList();

    for (auto i : accs)
    {
        out << "- - - - - - - - - - -\n";
        out << *i << "\n";
    }
    out << "\n";

    out << "The list of loan's: \n\n";
    vector<Loan*> loans = cli.getLoans();
    for (auto i : loans)
    {
        out << "- - - - - - - - - - -\n";
        out << *i << "\n";
    }

    out << endl;

    return out;
}
