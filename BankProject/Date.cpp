#include "Exception.h"
#include "Date.h"
#include <string>

using namespace System::Windows::Forms;
using System::String;

using namespace std;

Date::Date(const int m, const int d, const int y) // constructor 
{
    setDate(m, d, y); // call set date
}

bool Date::isLeapYear(int year) // checks the leap year
{
    /*
    // If a year is multiple of 400,
    // then it is a leap year
    if (year % 400 == 0)
        return true;

    // Else If a year is multiple of 100,
    // then it is not a leap year
    if (year % 100 == 0)
        return false;

    // Else If a year is multiple of 4,
    // then it is a leap year
    if (year % 4 == 0)
        return true;
    return false;
    */
    int r = year % 33;
    return r == 1 || r == 5 || r == 9 || r == 13 || r == 17 || r == 22 || r == 26 || r == 30;
    return false;
}

Date::Date() // default constructor
{
    setDate(1, 1, 1);
}

Date::Date(const Date& bd) // copy constructor
{
    *this = bd;
    // setDate(d._day, d._month, d._year);
}

int Date::maxDayForMonth(int m, int y) // find day in every month
{
    if (m < 7) // condition
        return 31;
    else if (m < 12)
        return 30;
    else if (m == 12)
        return isLeapYear(y) ? 30 : 29;
    else
        throw Exception("Month must be between 1 to 12"); // throw an exception
}

void Date::setDate(const int m, const int d, const int y) // set date
{
    if (y < 0 || m < 1 || m > 12 || d < 1 || d > maxDayForMonth(m, y)) // condition
        throw Exception("Invalid value"); // throw an exception

    _day = d;
    _month = m;
    _year = y;
}

void Date::incOneDay() // increase one day
{
    _day++;
    if (_day > maxDayForMonth(_month, _year))
    {
        _day = 1;
        _month++;
        if (_month > 12)
        {
            _month = 1;
            _year++;
        }
    }
}

int Date::getDay() const { return _day; } // return day
int Date::getMonth() const { return _month; } // return month
int Date::getYear() const { return _year; } // return year

Date& Date::operator=(const Date& bd) // overloding = operator
{
    setDate(bd._month, bd._day, bd._year); // set date

    return *this;
}

ostream& operator<<(ostream& out, const Date& date) // overloding << operator
{
    out << date.getMonth() << '/' << date.getDay() << '/' << date.getYear();

    return out;
}

bool checkStrToDate(string str) // check function strToDate
{
    int size = str.length(), j = 0;
    int* slash = new int[size];
    bool check = true;

    for (int i = 0; i < size && check; i++)
        if (!isdigit(str[i]))
        {
            if (str[i] != '/') check = false;
            else slash[j++] = i;
        }

    if (j != 2) check = false;
    else if ((slash[1] - slash[0]) == 1) check = false;
    else if (slash[0] == 0 || slash[0] == size - 1 ||
        slash[1] == 0 || slash[1] == size - 1) check = false;

    delete[] slash;
    return check;
}

Date strToDate(string str) // string date
{
    if (!checkStrToDate(str))
        throw Exception("Format date is wrong!\n"); // throw an exception

    int slash_pos = str.find('/');
    int m = stoi(str.substr(0, slash_pos));
    str = str.substr(slash_pos + 1);
    slash_pos = str.find('/');
    int d = stoi(str.substr(0, slash_pos));
    int y = stoi(str.substr(slash_pos + 1));

    return Date(m, d, y);
   // return Date(1, 1, 1);
}