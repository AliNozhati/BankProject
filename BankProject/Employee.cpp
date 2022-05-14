#include <iostream>
#include <string>
#include "Employee.h"
#include "User.h"
#include "Exception.h"
#include "Bank.h"

using namespace System::Windows::Forms;
using System::String;

vector<int64_t> Employee::_allPersNum;

Employee::Employee(const string& name, const string& lname, const Date& bdate, const int64_t& natCode, // Person
    const string& username, const string& pass, // Id
    Bank* bank, // Bank
    const int64_t& baseSal, const int64_t& persNum) // Employee
    : Person(name, lname, bdate, natCode),
    User(username, pass)
{
    _baseSalary = _monthlySalary = 3000000;
    _leaveHours = _extraHours = 0;
    _bank = bank;
    _baseSalary = baseSal;
    setPersNum(persNum); // set personnel number
}

Employee::Employee(const Employee& emp) // copy constructor
    : Person(emp), User(emp)
{
    _baseSalary = emp._baseSalary;
    _monthlySalary = emp._monthlySalary;
    _leaveHours = emp._leaveHours;
    _extraHours = emp._extraHours;
    _personnelNumber = emp._personnelNumber;
    _bank = emp._bank;
}

void Employee::setLeaveHours(const int leaveHrs) // set leave hours
{
    _leaveHours += leaveHrs;
    if (_leaveHours > 15)
    {
        if ((_leaveHours - 15) * 100 > _monthlySalary) // The hourly wage deduction is greater than the total monthly salary 😐
            throw Exception("You can no longer go on leave!\n"); // throw an exception

        _monthlySalary -= (_leaveHours - 15) * 100000;
        MessageBox::Show("If you go on leave, your salary will be reduced by this amount: " + (_leaveHours - 15));
    }
    else
        MessageBox::Show("Remaining leave hours : " + (15 - _leaveHours));

    time_t now = time(0);
    string nowDateAndTime(asctime((localtime(&now))));
    nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);

    string report = "The employee with personnel number ";
    report += to_string(_personnelNumber);
    report += " on " + nowDateAndTime + " , ";
    report += to_string(leaveHrs);
    report += " hours leave.";

    _bank->addReport(report); // add a report
}

void Employee::setExtraHours(const int extraHrs) // set overtime hours
{
    if (_extraHours + extraHrs > 12)
    {
        MessageBox::Show("You use all extra working hours!");
        return;
    }
    else {
        _monthlySalary += extraHrs * 120000;
        _extraHours += extraHrs;
        MessageBox::Show("Your salary after " + extraHrs + " extra hours is " + _monthlySalary);
    }

    time_t now = time(0);
    string nowDateAndTime(asctime((localtime(&now))));
    nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);

    string report = "The employee with personnel number ";
    report += to_string(_personnelNumber);
    report += " on " + nowDateAndTime + " , ";
    report += to_string(extraHrs);
    report += " hours of overtime.";

    _bank->addReport(report); // add a report
}

void Employee::addAccount(string name, string lname, Date d, int64_t natCode, string user, string pass, int64_t priBalance) const
{
    if (to_string(natCode).length() != 10)
    {
        MessageBox::Show("problem in national code.");
        return;
    }
    if (name.length() <= 2 || lname.length() <= 2) {
        MessageBox::Show("problem in name or lastname.");
        return;
    }
    if (User::checkUsername(user))
    {
        if (User::checkPass(pass))
            _bank->addAccount(_personnelNumber, name, lname, d, natCode, user, pass, priBalance);
        else
            MessageBox::Show("password must be at least 8 characters");
    }
    else
        MessageBox::Show("Username must be atleast 6 charecters! or repeated."); // throw an exception"
}

void Employee::removeAccount(const int64_t& accNumber) const // remove an account
{
    _bank->removeAccount(_personnelNumber, accNumber);
}

void Employee::deActiveAccount(int64_t accNumber) // deactive an account
{
    _bank->deActiveAcc(_personnelNumber, accNumber);
}

int Employee::getLeaveHours() const { return _leaveHours; } // return leave hours
int Employee::getExtraHours() const { return _extraHours; } // return overtime hours
int64_t Employee::getMonthlySalary() const { return _monthlySalary; } // return monthly salary
int64_t Employee::getPersonnelNumber() const { return _personnelNumber; } // return personnel number
int64_t Employee::getBaseSalary() const { return _baseSalary; } // return base salary
Bank* Employee::getBank() const { return _bank; } // return bank

ostream& operator<<(ostream& out, const Employee& emp) // overloading << operator
{
    const Person* p = &emp;
    const User* u = &emp;

    out << *p << *u
        << "Leave hours: " << emp.getLeaveHours() << "\n"
        << "Extra hours: " << emp.getExtraHours() << "\n"
        << "Monthly salary: " << emp.getMonthlySalary() << "\n"
        << "Base salary: " << emp.getBaseSalary() << "\n"
        << "personnel number: " << emp.getPersonnelNumber() << endl;

    return out;
}

Client* Employee::getClient(const int64_t& natCode) // return a client
{
    return _bank->getClient(natCode);
}

void Employee::setPersNum(const int64_t& perNum) // set personnel number
{
    if (perNum < 0)
        throw Exception("Wrong! personnel number should not negative\n"); // throw an exception
    else if (perNum > 0)
    {
        if (!checkPersNum(perNum))
            throw Exception("personnel number is repeteddd"); // throw an exception
        _personnelNumber = perNum;
        _allPersNum.push_back(perNum);
        return;
    }

    srand(time(0)); // create different time
    bool check = true;
    int64_t num;
    do {
        num = rand() + 1;
        check = checkPersNum(num); // call check personnel number
    } while (!check);
    _personnelNumber = num;
    MessageBox::Show("your personnel number is: " + _personnelNumber);
}

bool Employee::checkPersNum(const int64_t& perNum)  // check personnel number
{
    for (auto i : _allPersNum)
        if (i == perNum)
            return false;
    return true;
}