//#pragma once
#ifndef FACILITY_H // if not define
#define FACILITY_H // define
#include "employee.h"
#include "loan.h"
#include "client.h"
#include "request.h"

using namespace std;

class Facility : public Employee { // facility inherit from employee

// declare public method
public:
    Facility(const string&, const string&, const Date&, const int64_t&, // Person
        const string&, const string&, // Id
        Bank*, // Bank
        const int64_t&, const int64_t & = 0); // Employee

    Facility(const Facility&); // copy constructor

    vector<Account*> getReqLoans(); // vector of account's who return request loan's
    void deActivateAllAcc(const int64_t&); // code melli migire mibnde
    void showAllReqLoan(); // show all request loan's
    void reviewReqLoan(int i);// ew request loan's
    Loan viewLoanStatus(const int64_t&); // view loan status
};

ostream& operator<<(ostream&, const Facility&); // overloading << operator

#endif