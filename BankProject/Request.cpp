#include "Request.h"
#include "Exception.h"
using namespace std;
using namespace System::Windows::Forms;
using System::String;

#include <iostream>

vector<Account*> Request::_accountsOfLoanApplicants;
vector<LoanType> Request::_typeOfLoanApplicants;
Request* Request::_req = nullptr;

Request::Request() {} // private constructor

Request* Request::create() // create a request
{
    if (_req == nullptr)
        _req = new Request();
    return _req;
}

void Request::addReqLoan(Account* acc, LoanType lt) // add request loan
{
    _accountsOfLoanApplicants.push_back(acc);
    _typeOfLoanApplicants.push_back(lt);
    acc->requestLoan();
}