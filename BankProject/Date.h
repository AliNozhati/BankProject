#pragma once
//#ifndef DATE_H // if not define
//#define DATE_H // define
#include <iostream>
#include <fstream>

using namespace std;

class Date
{
    // declare public method
public:
    Date(const int, const int, const int); // first element: month, second element: day, third element: year
    Date(); // default constructor
    Date(const Date&); // copy constructor
    // ~Date();// destructor

    void setDate(const int, const int, const int); // set date
    void incOneDay(); // increase one day

    int getDay() const; // return day
    int getMonth() const; // return month
    int getYear() const;  // return year

    static int maxDayForMonth(const int, const int); // first element: month, second element: year
    static bool isLeapYear(const int); // checks the leap year

    Date& operator=(const Date&); // overloding = operator

// declare protected member
protected:
    int _day;
    int _month;
    int _year;
};

ostream& operator<<(ostream& out, const Date& date); // overloding << operator
bool checkStrToDate(string str); // check function convert date to string
Date strToDate(string str); // convert date to format string


//#endif
