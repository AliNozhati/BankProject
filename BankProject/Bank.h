//#pragma once
#ifndef BANK_H // if not define
#define BANK_H // define
#include <string>
#include <vector>

#include "person.h"
#include "date.h"
#include "user.h"
#include "client.h"
//#include "request.h"
#include "ReadAndWriteFile.h"
#include "loan.h"

class Request;
class Manager;
class Facility;
class Employee;
class Bank {

    // declare public member 
public:
    Bank(const string&, const int64_t&); // constructor

    Bank(const Bank&); // copy constructor
    ~Bank(); // destructtor

    void setManagerAndFacility(Manager*, Facility*); // set manager and facility

    vector<Account*> getAccList(const int64_t&); // return list of account's with national code
    Account* getAcc(const int64_t); // return an account with account number
    void addAccount(int64_t personnelNum, string name, string lname, Date d, int64_t natCode, string user, string pass, int64_t priBalance);//dd an account
    void removeAccount(const int64_t&, const int64_t&); // remove an account
    void deActivateAllAcc(const int64_t&, const int64_t&); // deactive all account's
    void deActiveAcc(const int64_t&, const int64_t&); // deactive an account's
    bool addLoan(const int64_t&, Account*, const int64_t&); // add lodn
    vector<Account*> getAccsReqLoans(const int64_t&); // return request loan's
    vector<LoanType> getLoansTypeReqLoans(const int64_t&); // return loan's type of account who them have request loan
    vector<Loan*> getLoans(const int64_t&); // return loan's
    Loan* getLoan(const int64_t&); // return a loan
    string getBranchName() const; // 
    int searchPerNumEmp(const int64_t&) const; // private // search personnel number for employee
    int searchNatCodeCl(const int64_t&) const; // private // search national code for client
    int searchPerNumManager(const int64_t&) const; // private // search personnel number for manager
    int searchPerNumFacility(const int64_t&) const; // private // search personnel number for facility
    int searchSerNumLoan(const int64_t&) const; // private // search account number loan
    bool getToDayLoanStatus(const int64_t&); // return today loan status
    Client* getClient(const int64_t&) const; // return client

    // login
    Client* getClient(const string&, const string&) const; // return client
    Employee* getEmployee(const string&, const string&) const; // return employee
    Manager* getManager(const string&, const string&) const; // return manager
    Facility* getFacility(const string&, const string&) const; // return facility
    void addReport(const string&) const;

    friend class Manager; // this class is friend with manager class
    friend void Loan::withdrawalLoan(); // this class is friend with withdrawalLoan
    friend class ReadAndWriteFile; // this class is friend with ReadAndWriteFile class

    Bank& operator=(const Bank&); // overlaoding = operator 

// declare protected member
protected:
    vector<Loan*> _loans; // vector of loan's
    vector<Client*> _clients; // vector of client's
    vector<Account*> _accountsList; // vector of account's
    string _branchName; // branch name bank
    int64_t _branchCode; // branch code bank
    void checkMngrAndFac() const; // checking manager and facility

// declare private member
private:
    ReadAndWriteFile* _sqlServer;
    bool _todayLoanStatus;
    bool _existManager;
    Manager* _manager;
    Facility* _facility;
    vector<Employee*> _employees; // vector of employees
    Request* _allRequest;
    int64_t _NumOfDaysOpeningBank;

    static vector<int64_t> _allBrCode;

    void setBrName(const string&); // set branch name
    void addEmp(Employee*); // add an employee
    void addclient(Client*); // add a client
    void copyClients(const vector<Client*>); // make a copy client
    void copyAccountsList(const vector<Account*>); // make a copy accounts list
    void copyEmployees(const vector<Employee*>); // make a copy employees
    void copyLoans(const vector<Loan*>); // make a copy loans
    void copyFacility(const Facility*); // make a copy facility
    void copyManager(const Manager*); // make a copy manager
    Client* inputInfoCl(const int64_t&); // input information client
    void deActivateAllAcc(const int64_t&); // deactive all account
    void activeAllAcc(const int64_t&); // active all account
    void withdrawIns(const int64_t&, const int64_t&); // withdraw installment
    bool setBrCode(const int64_t&); // set branch code
    bool checkBrCode(const int64_t&); // check branch code

    // file
    void setLeaveHoursEmp(Employee*, const int64_t&); // set leave extra hours
    void setExtraHoursEmp(Employee*, const int64_t&); // set extra hours work
    void incOneDay(); // increase one day
};
//vector<int64_t> Bank::_allBrCode;

#endif


