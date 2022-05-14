//#pragma once
#ifndef MANAGER_H // if not define
#define MANAGER_H // define
#include "facility.h"
#include "bank.h"
#include <vector>
#include <string>

class Manager : public Facility { // manager inherit from facility

// declare public method
public:
    Manager(const string&, const string&, const Date&, const int64_t&, // Person // constructor
        const string&, const string&, // Id
        Bank*, // Bank
        const int64_t&, const int64_t & = 0); // Employee
    Manager(const Manager&); // copy constructor

    Employee* showInfEmp(const int64_t&) const; // show information employee
    void employeeRecruitment(string name, string lname, Date d, int64_t natCode, string user, string pass); // recruitment employee
    void DismissalEmployee(const int64_t&); // dismissal employee
    Employee* inputInfoEmp(); // input info employee
};

ostream& operator<<(ostream&, const Manager&); // overloading << operator

#endif