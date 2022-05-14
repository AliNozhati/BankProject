#include <iostream>
#include <string>
#include "Manager.h"
#include "Employee.h"
#include "Date.h"
#include "Bank.h"
#include "Exception.h"
#include <vector>

using namespace System::Windows::Forms;
using System::String;


Manager::Manager(const string& name, const string& lname, const Date& bdate, const int64_t& natCode, // Person // constructor
    const string& user, const string& pass, // Id
    Bank* myBank,  // Bank
    const int64_t& baseSal, const int64_t& persNum) // Facility
    : Facility(name, lname, bdate, natCode, user, pass, myBank, baseSal, persNum)
{
}

Manager::Manager(const Manager& mngr) // copy constructor
    : Facility(*this) {}

Employee* Manager::showInfEmp(const int64_t& perNum) const // show information employee
{
    int index = _bank->searchPerNumEmp(perNum);
    if (index == -1)
    {
        MessageBox::Show("There isn't any employee with such a personnel number!");
        return nullptr;
    }
    else
        return (_bank->_employees[index]);

}

void Manager::employeeRecruitment(string name, string lname, Date d, int64_t natCode, string user, string pass)
{
 // Employee* emp = inputInfoEmp();

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
        {
            Employee* emp = new Employee(name, lname, d, natCode, user, pass, _bank, 3e6);
            _bank->addEmp(emp);
        }
        else
            MessageBox::Show("password must be at least 8 characters");
    }
    else
        MessageBox::Show("Username must be atleast 6 charecters! or repeated."); // throw an except
}

void Manager::DismissalEmployee(const int64_t& perNum) // dismissal employee
{
    int index = _bank->searchPerNumEmp(perNum);
    if (index == -1)
    {
        MessageBox::Show("There isn't any employee with such a personnel number!");
    }
    else
        _bank->_employees.erase(_bank->_employees.begin() + index);
}

ostream& operator<<(ostream& out, const Manager& mngr) // overloading << operator
{
    const Facility* fac = &mngr;
    out << *fac << "\n";

    return out;
}

Employee* Manager::inputInfoEmp() // input information employee
{
    string name, lastname, username, password;
    int bDay, bMonth, bYear;
    int64_t natCode;
    Date bd;

    MessageBox::Show("Name: ");
    cin >> name;

    MessageBox::Show("Last name: ");
    cin >> lastname;

    MessageBox::Show("Birthday day: ");
    cin >> bDay;

    MessageBox::Show("Birthday month: ");
    cin >> bMonth;

    MessageBox::Show("Birthday year: ");
    cin >> bYear;

    bd.setDate(bMonth, bDay, bYear);

    MessageBox::Show("Enter natioal code: ");
    cin >> natCode;

    MessageBox::Show("username: ");
    cin >> username;

    MessageBox::Show("password: ");
    cin >> password;
    cin.get();


    Employee* emp = new Employee(name, lastname, bd, natCode, username, password, _bank, 3e6);
    return emp;
}