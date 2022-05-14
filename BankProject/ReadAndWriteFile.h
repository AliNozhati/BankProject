//#pragma once
#ifndef READANDWRITEFILE_H // if not define
#define READANDWRITEFILE_H // define
#include "employee.h"
#include "bank.h"
#include "manager.h"

#include <vector>

class ReadAndWriteFile { // sql server
// declare public method
public:
    ReadAndWriteFile(Bank*); // constructor

    void readListOfBranchCodes();
    void createNewBankSqlServer();

    void writeInfoBank(); // write information bank in file
    void readInfoBank(); // read information bank

    void addReport(const string&); // add report
    string getReport(); // return report

// declare private method
private:
    Bank* _bank;
    string _path;
    string _branchPath;

    void writeBank(const string&); // write info bank in file

    void writeManager(const string&); // write info manager in file

    void writeFacility(const string&); // write info facility in file

    void writeEmployees(const string&); // write info employee's in file
    void writeEmployee(const Employee*, ofstream&); // write info an employee in file

    void writeClients(const string&); // write info client's in file
    void writeClient(const Client*, ofstream&); // write info a client in file

    void writeLoans(const string&); // write info loan's in file
    void writeLoan(const Loan*, ofstream&); // write info a loan in file

    void writeAccounts(const string&); // write info accounts in file
    void writeAccount(const Account*, ofstream&); // write info an account in file

    void writeRequests(const string&); // write info request's in file

    void writePersInfo(const Person*, const User*, ofstream&); // write personal info in file

/////////////////////////////////////////////////////////////////////////

    void readBank(const string&); // read info bank from file

    void readManagerAndFacility(const string&, const string&); // read  manager and facility info from file
    void readInfoEmp(string&, string&, Date&, int64_t&, string&, string&, int64_t&, int64_t&, int&, int&, ifstream&); // read employee info from file
    Manager* readManager(const string&); // read info manager from file
    Facility* readFacility(const string&); // read info facility from file

    void readEmployees(const string&); // read info employee's from file
    Employee* readEmployee(ifstream&); // read info an employee from file

    void readClients(const string&); // read info client's from file
    Client* readClient(ifstream&); // read info a client from file

    void readLoans(const string&); // read info loan's from file
    Loan* readLoan(ifstream&); // read info a loan from file

    void readAccounts(const string&); // read info account's from file
    Account* readAccount(ifstream&); // read info an account from file

    void readRequests(const string&); // read info request's from file

    void readPersInfo(string&, string&, Date&, int64_t&, string&, string&, ifstream&); // read personal info from file
};

#endif
