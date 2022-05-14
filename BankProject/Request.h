//#pragma once
#ifndef REQUEST_H // if not define
#define REQUEST_H // define
#include <vector>
#include "loan.h"
#include "account.h"

using namespace std;

// singleton (design pattern)
class Request {
    // declare public method
public:
    static void addReqLoan(Account*, LoanType); // add request loan
    static Request* create(); // creat request 

    friend class Bank; // this class is friend with bank class

    // declare protected method
protected:
    static vector<Account*> _accountsOfLoanApplicants; // vector of account who save accounts of loan applicant's
    static vector<LoanType> _typeOfLoanApplicants; // vector of type of each loan 

// declare private method
private:
    Request(); // private constructor 
    static Request* _req;
};

//vector<Account*> Request::_accountsOfLoanApplicants;
//vector<LoanType> Request::_typeOfLoanApplicants;
//Request* Request::_req = nullptr;

#endif

