//#pragma once
#ifndef EMPLOYEE_H // if not define
#define EMPLOYEE_H // define
#include <string>
#include "person.h"
#include "date.h"
#include "user.h"

using namespace std;

class Bank;
class Client;
class Employee : public Person, public User { // employee inherit from person and user

// declare public method
public:
    Employee(const string&, const string&, const Date&, const int64_t&, // Person // constructor
        const string&, const string&, // Id
        Bank*, // Bank
        const int64_t&, const int64_t & = 0); // Employee
    Employee(const Employee&); // copy constructor

    void setLeaveHours(const int); // set leave hours
    void setExtraHours(const int); // set overtime hours

    void addAccount(string name, string lname, Date d, int64_t netCode, string user, string pass, int64_t priBalance) const; // natCode
    void removeAccount(const int64_t&) const; // accNumber
    void deActiveAccount(int64_t); // deActive an account

    int getLeaveHours() const; // return leave hours
    int getExtraHours() const; // return overtime hours

    int64_t getMonthlySalary() const; // return monthly salary
    int64_t getPersonnelNumber() const;
    int64_t getBaseSalary() const; // return base salary

    Client* getClient(const int64_t&); // return client
    Bank* getBank() const; // return bank

    friend class Bank;

    // declare protected method
protected:
    int64_t _personnelNumber;
    int64_t _baseSalary;
    int _leaveHours;
    int _extraHours;
    int64_t _monthlySalary;
    Bank* _bank;

    // declare private method
private:
    void setPersNum(const int64_t&); // set personnel number
    bool checkPersNum(const int64_t&); // checking personnel number
    static vector<int64_t> _allPersNum; // vector of int64_t(long long int) who saved all personnel number
};

//vector<int64_t> Employee::_allPersNum;
ostream& operator<<(ostream&, const Employee&); // overloading << operator

#endif