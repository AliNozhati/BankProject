//#pragma once
#ifndef LOAN_H // if not define
#define LOAN_H // define
#include<string>
#include "date.h"
#include "account.h"
// #include "bank.h"
//using namespace std;

enum LoanType { month_12 = 4, month_24 = 8, month_36 = 12 }; // declare enum for Repayment time

class Bank;
class Account;
class ReadAndWriteFile;

class Loan {

    // declare public method
public:
    Loan(const int64_t&, const int64_t&, const int64_t&, const LoanType&, Bank*, int64_t = 0); // constructor
    Loan(const Loan&); // copy constructor
    // ~Loan(); // destructor

    Loan& operator=(const Loan&); // overloading = operator
    string warningSMS() const; // show warning sms to client
    void withdrawalLoan(); // withdrawal loan
    int64_t getNatCode() const;// return natinal code

    int64_t getAccNumber() const; // return account number
    Date getDateReceived() const; // return date received loan
    int64_t getLoanAmount() const; // return amount of loan
    int64_t getLoanInterest() const; // return interset loan
    int getAllInstallments() const; // return all installments
    int64_t getAmountInstallments() const; // return
    int getPaidInstallments() const; // return paid installments
    int getOverdueInstallments() const; // return overdue installments
    int64_t getSerialNumber() const; // return serial number
    int64_t getForfeit() const;

    friend class ReadAndWriteFile; // this class is friend with ReadAndWriteFile class
    friend class Bank;

    // declare protected method
protected:
    Bank* _bank;
    int64_t _accNumber;
    int64_t _nationalCode;
    Date _dateReceived;
    int64_t _loanSerialNumber;
    int64_t _daysAfterPaidLoan;
    int64_t _forfeit;

    LoanType _loanType;

    int64_t _loanAmount;
    int64_t _paidLoanAmount;

    int64_t _loanInterest;
    int _allInstallments;
    int64_t _amountInstallments;
    int _paidInstallments;
    int _overdueInstallments;

    // declare private method
private:
    void calcAmountInstallments(); // calculate amount installments
    void incOneDay(); // increase one day

    void setSerialNum(const int64_t& serialNum); // set serial number
    bool checkSerialNum(const int64_t& serialNum); // checking serial number
    static vector<int64_t> _allSerialNum; // vector of int64_t(long long int) who saved all serial number
};

ostream& operator<<(ostream& out, const Loan& loan); // overloading << operator

//vector<int64_t> Loan::_allSerialNum;

#endif
