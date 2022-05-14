#include <string>
#include "Exception.h"
#include "Date.h"
#include "Person.h"

using namespace System::Windows::Forms;
using System::String;

using namespace std;

vector<int64_t> Person::_allNatCode;

Person::Person(const string name, const string lName, const Date& bd, const int64_t& natCode) // constructor
    : _bdate(bd) // constructor
{
    setFullName(name, lName); // set full name
    setNatCode(natCode); // set national code
}

Person::Person(const Person& per) // copy constructor
{
    _name = per._name;
    _lastname = per._lastname;
    _nationalCode = per._nationalCode;
    _bdate = per._bdate;
}

void Person::setFullName(const string name, const string lName) // set full name
{
    setName(name); // set name
    setLastname(lName); // set last name
}

void Person::setName(const string name)  // set name
{
    if (name.size() <= 2) // check size name
    {
        MessageBox::Show("The name must have at least 2 characters!"); // throw an exception
        return;
    }
        

    _name = name;
}

void Person::setLastname(const string lName) // set last name
{
    if (lName.size() <= 2)// check size last name
    {
        MessageBox::Show("The lastname must have at least 2 characters!"); // throw an exception
        return;
    }
    _lastname = lName;
}

void Person::setDate(const Date& bd) // set date
{
    _bdate = bd;
}

Person& Person::operator=(const Person& per) // overloading = operator
{
    _name = per.getName();
    _lastname = per.getLastName();
    _nationalCode = per.getNatCode();
    _bdate = per.getbDate();

    return *this;
}

string Person::getName() const { return _name; } // return name
string Person::getLastName() const { return _lastname; } // return lastname
int64_t Person::getNatCode() const { return _nationalCode; } // return national code
Date Person::getbDate() const { return Date(getMonth(), getDay(), getYear()); } // return birthday date
int Person::getDay() const { return _bdate.getDay(); } // return day of birthday
int Person::getMonth() const { return _bdate.getMonth(); } // return month of birthday
int Person::getYear() const { return _bdate.getYear(); } // return year of birthday

ostream& operator<<(ostream& out, const Person& person) // overloading << operator
{
    out << "Name: " << person.getName() << "\n"
        << "Last name: " << person.getLastName() << "\n"
        << "National code: " << person.getNatCode() << "\n"
        << "Birthday: " << person.getMonth() << "/"
        << person.getDay() << "/"
        << person.getYear() << endl;

    return out;
}

void Person::setNatCode(const int64_t& natCode) // set national code
{
    if (natCode <= 0)
        MessageBox::Show("Wrong! national code should not negative\n"); // throw an exception
    else if (natCode > 0)
    {
        if (!checkNatCode(natCode))
            MessageBox::Show("national code is repeted"); // throw an exception
        _nationalCode = natCode;
        _allNatCode.push_back(natCode); // push national code to all national code
        return;
    }
}

bool Person::checkNatCode(const int64_t& natCode) // check national code
{
    for (auto i : _allNatCode)
        if (i == natCode)
            return false;

    return true;
}