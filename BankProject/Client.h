#pragma once
//#ifndef CLIENT_H // if not define
//#define CLIENT_H // define
#include "person.h"
#include "account.h"
#include <string>
#include <vector>
#include "user.h"
#include "loan.h"

using namespace std;

class Bank;
class Client : public Person, public User { // client inherit from person and user

// declare public member
public:
    Client(const string&, const string&, const Date&, const int64_t&, // Constructor Person
        const string&, const string&, // Constructor User
        Bank*); // Constructor Bank

    Client(const Person&, // Constructor Person
        const string&, const string&, // Constructor User
        Bank*); // Constructor Bank

    Client(const Client&); // copy constructor

    void requestLoan(const int64_t, const LoanType & = month_24); // apply for a loan
    bool loanTracking(const int64_t); // loan tracking
    void withdraw(const int64_t, const int64_t&); // withdrow money
    void deposit(const int64_t, const int64_t&); // deposit money
    int64_t getBalance(const int64_t); // return account balance

    const vector<Account*> getAccList() const; // vector of account who return account's
    const vector<Loan*> getLoans() const; // vector of loan who return loan's
    const Loan* getLoan(const int64_t&) const; // return a loan
    Account* getAcc(const int64_t) const; // return an account

    Client& operator=(const Client&); // overloding = operator

// declare protected member
protected:
    Bank* _bank;
};

//#endif
