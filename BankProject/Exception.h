//#pragma once
#ifndef EXCEPTION_H // if not define
#define EXCEPTION_H// define
#include <string>

using namespace std;

class Exception {

    // declare public method
public:
    Exception(string); // constructor
    string show() const; // show exception

// declare private method
private:
    string _errorSentence;
};

#endif
