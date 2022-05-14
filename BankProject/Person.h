//#pragma once
#ifndef PERSON_H // if not define
#define PERSON_H // define

#include <string>
#include "date.h"
#include <vector>

using namespace std;

class readAndWriteFile;

class Person {

    //declare public method
public:

    Person(const string, const string, const Date&, const int64_t & = 0); // constructor
    Person(const Person&); // copy constructor

    void setFullName(const string, const string); // set fullname
    void setName(const string); // set name
    void setLastname(const string); // set last name
    void setDate(const Date&); // set birthday date

    string getName() const; // return name
    string getLastName() const; // return last name
    int64_t getNatCode() const; // return national code
    Date getbDate() const; // return Date of birthday
    int getDay() const; // return day of birthday date
    int getMonth() const; // return month of birthday date
    int getYear() const; // return year of birthday date

    Person& operator=(const Person&); // overloading = operator

    friend class ReadAndWriteFile;

    // declare protected member
protected:
    string _name;
    string _lastname;
    int64_t _nationalCode;
    Date _bdate;

    //declare private method
private:
    static vector<int64_t> _allNatCode;
  //  void setNatCode(const string); // set national code
    void setNatCode(const int64_t&); // set national code
    bool checkNatCode(const int64_t&); // checking national code

};

//vector<int64_t> Person::_allNatCode;
ostream& operator<<(ostream&, const Person&); // overloading << operator

#endif 