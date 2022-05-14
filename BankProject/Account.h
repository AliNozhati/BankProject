//#pragma once
#ifndef ACCOUNT_H // if not define
#define ACCOUNT_H // define
#include <string>
#include "Date.h"
#include <fstream>
#include <iostream>
#include "Person.h"
#include <vector>
#include <ctime>
#include "Loan.h"
using namespace std;

class Client;
class Facility;
class Manager;
class Bank;
class ReadAndWriteFile;

class Account {

    // declare public method
public:
    Account(const int64_t&, Bank*, const int64_t&, int64_t = 0); // constructor
    Account(const Account&); // copy constructor

    void deposit(const int64_t&); // deposit money
    void withdraw(const int64_t&); // withdrow money
    int64_t getBalance() const; // return balance
    int64_t getAccNumber() const; // return account number
    int64_t getNatCode() const; // return national code
    bool isActive() const; // checking activ or de active account

    void requestLoan(); // Apply for a loan

    bool getReqLoan() const; // return that is loan requested or not
    bool getAccLoan() const; // return that is loan accepted or not

    int64_t getActiveDays() const; // active days 
    int64_t getGreatBalDays() const; // great balance days  
    Date getOpenAccDate() const; // opening account date

    Account& operator=(const Account&); // overloding = operator
    friend class Bank; // this class is friend with Bank class
    friend class ReadAndWriteFile; // this class is friend with Bank class

// declare protected member
protected:
    Bank* _bank;
    int64_t _nationalCode;
    int64_t _accountNumber;
    int64_t _balance;
    int64_t _activeDays; // active days 
    int64_t _greatBalDays; // number of days that the balance of account is more than 1e6 
    bool _active; // checking active
    bool _isLoanRequested;
    bool _isLoanAccepted;

    // declare protected member
private:
    Date _openAccDate; // opening account date
    static vector<int64_t> _allAccNum;
    void setBalance(const int); // set balance
    void incOneDay(); // increase one day
    void setAccNum(int64_t&); // set account number
    bool checkAccNum(const int64_t&); // checking account number
};

//vector<int64_t> Account::_allAccNum;

ostream& operator<<(ostream&, const Account&); // overloading << operator

#endif