#include <iostream>
#include "Bank.h"
#include "Exception.h"
#include "Manager.h"
#include "Account.h"
#include "ReadAndWriteFile.h"
#include <direct.h>

using namespace std;
using namespace System::Windows::Forms;
using System::String;

vector<int64_t> Bank::_allBrCode;

Bank::Bank(const string& bName, const int64_t& brCode) // constructor
{
    _sqlServer = new ReadAndWriteFile(this);
    _sqlServer->readListOfBranchCodes();

    time_t now = time(0);
    string nowDateAndTime(asctime((localtime(&now))));
    nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);

    setBrName(bName); // set branch name
    if (!setBrCode(brCode))
    {
        _branchCode = brCode;
        _sqlServer->createNewBankSqlServer();
        _allBrCode.push_back(brCode);

        string report = "The bank was built with name \" ";
        report += bName;
        report += " \" and code \" ";
        report += to_string(brCode);
        report += " \" on " + nowDateAndTime + " was created.";

        addReport(report); // add a report
    }
    else
    {
        string report = "The bank opened on ";
        report += nowDateAndTime + ".";

        addReport(report); // add a report
    }

    _allRequest = Request::create();
    _existManager = false;
    _facility = _manager = nullptr;
    _todayLoanStatus = false;
    _NumOfDaysOpeningBank = 0;
    _sqlServer->readInfoBank();
}

void Bank::copyClients(const vector<Client*> clients)  // make a copy for client's
{
    int size = clients.size();
    for (int i = 0; i < size; i++)
    {
        Client* cli = new Client(*clients[i]);
        _clients.push_back(cli); // push cli to clients
    }
}

void Bank::copyAccountsList(const vector<Account*> accounts) // make a copy for account list's
{
    int size = accounts.size();
    for (int i = 0; i < size; i++)
    {
        Account* acc = new Account(*accounts[i]);
        _accountsList.push_back(acc); // push acc to account list
    }
}

void Bank::copyEmployees(const vector<Employee*> employees) // make a copy for employee
{
    int size = employees.size();
    for (int i = 0; i < size; i++)
    {
        Employee* emp = new Employee(*employees[i]);
        _employees.push_back(emp); // push emp to employees
    }
}

void Bank::copyLoans(const vector<Loan*> loans) // make a copy for loan's
{
    int size = loans.size();
    for (int i = 0; i < size; i++)
    {
        Loan* loan = new Loan(*loans[i]);
        _loans.push_back(loan); // push loan to loans
    }
}

void Bank::copyFacility(const Facility* facility) // make a copy for facility
{
    Facility* fcl = new Facility(*facility);
    _facility = fcl;
}

void Bank::copyManager(const Manager* manager) // make a copy for manager
{
    Manager* mgr = new Manager(*manager);
    _manager = mgr;
}

Bank::Bank(const Bank& bank) // copy constructor
{
    *this = bank;
}

Bank::~Bank() // destructtor
{
    time_t now = time(0);
    string nowDateAndTime(asctime((localtime(&now))));
    nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);
    incOneDay(); // increase one day

    string report = "The bank was closed for ";
    report += to_string(_NumOfDaysOpeningBank);
    report += "th days since opening, on ";
    report += nowDateAndTime + ".";

    addReport(report); // add a report

    if (_existManager)
    {
        _sqlServer->writeInfoBank();
    }
    if (_existManager)
    {
        delete _manager;
        delete _facility;
    }
    delete _sqlServer;


    for (auto i : _clients) // for i from 0 to size
        delete i;

    for (auto i : _accountsList) // for i from 0 to size
        delete i;

    for (auto i : _employees) // for i from 0 to size
        delete i;

    for (auto i : _loans) // for i from 0 to size
        delete i;
}

void Bank::setManagerAndFacility(Manager* mngr, Facility* fac) // set manager and facility
{
    if (_existManager)
        throw Exception("This bank has a manager!\n"); // throw an exception

    _manager = mngr;
    _facility = fac;
    _existManager = true;

    time_t now = time(0);
    string nowDateAndTime(asctime((localtime(&now))));
    nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);

    string report = "A manager with a personnel number of ";
    report += to_string(_manager->getPersonnelNumber());

    report += " and an employee with a personnel number of ";
    report += to_string(_facility->getPersonnelNumber());

    report += " on " + nowDateAndTime + " added to the bank.";

    addReport(report); // add a report
}

void Bank::setBrName(const string& bName) // set branch name
{
    if (bName.size() <= 2)
    {
        MessageBox::Show("This name is not acceptable because it is too small!\n"); // throw an exception
        return;
    }
    _branchName = bName;
}

void Bank::addEmp(Employee* emp) // add an employee
{
    checkMngrAndFac(); // checking manager and facility
    _employees.push_back(emp); // push emp to employee's

    time_t now = time(0);
    string nowDateAndTime(asctime((localtime(&now))));
    nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);

    string report = "An employee with a personal number of ";
    report += to_string(emp->getPersonnelNumber());
    report += " and a salary of ";
    report += to_string(emp->getBaseSalary());
    report += " on " + nowDateAndTime + " was added to the bank.";

    addReport(report); // add a report
}

void Bank::addclient(Client* cl) // add a client
{
    checkMngrAndFac(); // checking manager and facility
    _clients.push_back(cl); // push a client to client's
}

vector<Account*> Bank::getAccsReqLoans(const int64_t& personnelNum) // return account who has request loan
{
    checkMngrAndFac(); // checking manager and facility
    if (searchPerNumManager(personnelNum) != -1 || searchPerNumFacility(personnelNum) != -1)
        return _allRequest->_accountsOfLoanApplicants;
    throw Exception("Access denied!\n"); // throw an exception
}

vector<LoanType> Bank::getLoansTypeReqLoans(const int64_t& personnelNum) // return loan type's for account's who has a request for loan
{
    checkMngrAndFac(); // checking manager and facility
    if (searchPerNumManager(personnelNum) != -1 || searchPerNumFacility(personnelNum) != -1)
        return _allRequest->_typeOfLoanApplicants;
    throw Exception("Access denied!\n"); // throw an exception
}

Loan* Bank::getLoan(const int64_t& serialNum) // return loan
{
    //checkMngrAndFac(); // checking manager and facility

    int index = searchSerNumLoan(serialNum); // search serial number for loan
    if (index != -1)
        return _loans[index];

    MessageBox::Show("There isn't any loan for this account!\n");
    return nullptr;
}

vector<Loan*> Bank::getLoans(const int64_t& natCode) // return vector of loan 
{
    checkMngrAndFac();
    vector<Loan*> loans;
    for (auto i : _loans)
        if (i->getNatCode() == natCode)
            loans.push_back(getLoan(i->getSerialNumber())); // push serial number to loans

    return loans;
}


string Bank::getBranchName() const { return _branchName; } // return branch name

void Bank::addAccount(int64_t personnelNum, string name, string lname, Date d, int64_t natCode, string user, string pass, int64_t priBalance)
{
    checkMngrAndFac(); // checking manager and facility
    int64_t accNumber; // account number

    //User::checkUsername(user);

    if (searchPerNumEmp(personnelNum) != -1 || searchPerNumManager(personnelNum) != -1 || searchPerNumFacility(personnelNum) != -1)
    {
        int index = searchNatCodeCl(natCode);
        if (index == -1)
        {
            Client* cl = new Client(name, lname, d, natCode, user, pass, this);
            _clients.push_back(cl); // push cl to clients

            if (priBalance < 50000)
            {
                MessageBox::Show("Primitive balance must be at least 50000!\n"); // throw an exception
                return;
            }
            Account* acc = new Account(cl->getNatCode(), this, priBalance);
            _accountsList.push_back(acc); // push acc to accounts list
            accNumber = acc->getAccNumber();
        }
        else
        {
            if (priBalance < 50000)
            {
                MessageBox::Show("Primitive balance must be at least 50000!\n"); // throw an exception
                return;
            }
            Account* acc = new Account(natCode, this, priBalance);
            _accountsList.push_back(acc); // push acc to account's list
            accNumber = acc->getAccNumber();
        }

        MessageBox::Show("account number: " + accNumber);
    }
    else
        throw Exception("Access denied!\n"); // throw an exception

    time_t now = time(0);
    string nowDateAndTime(asctime((localtime(&now))));
    nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);

    string report = "Client with national code ";
    report += to_string(natCode);
    report += " added an account with account number ";
    report += to_string(accNumber);
    report += " on " + nowDateAndTime;

    addReport(report); // add a report 
}

void Bank::removeAccount(const int64_t& personnelNum, const int64_t& accNumber) // remove an acount
{
    checkMngrAndFac(); // checking manager and facility
    if (searchPerNumManager(personnelNum) != -1 || searchPerNumFacility(personnelNum) != -1 || searchPerNumEmp(personnelNum) != -1)
    {
        int size = _accountsList.size();
        for (int i = 0; i < size; i++)
            if (_accountsList[i]->_accountNumber == accNumber)
            {
                _accountsList.erase(_accountsList.begin() + i);
                time_t now = time(0);
                string nowDateAndTime(asctime((localtime(&now))));
                nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);

                string report = "Account with account number ";
                report += to_string(accNumber);
                report += " on " + nowDateAndTime + " removed.";

                addReport(report); // add a report 
                return;
            }
        MessageBox::Show("There is not such a account\n"); // throw an exception
    }
    //throw Exception("Access denied!\n"); // throw an exception


}

void Bank::deActivateAllAcc(const int64_t& personnelNum, const int64_t& natCode) // deactive all account's
{
    checkMngrAndFac(); // checking manager and facility
    if (searchPerNumManager(personnelNum) != -1 || searchPerNumFacility(personnelNum) != -1)
        deActivateAllAcc(natCode);
    else
        throw Exception("Access denied!\n"); // throw an exception

    time_t now = time(0);
    string nowDateAndTime(asctime((localtime(&now))));
    nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);

    string report = "Client with national code ";
    report += to_string(natCode);
    report += " on " + nowDateAndTime;
    report += " all his/her account were deactivated.";

    addReport(report); // add a report
}

void Bank::deActiveAcc(const int64_t& personnelNum, const int64_t& accNumber) // deactive an account
{
    if (searchPerNumEmp(personnelNum) != -1 || searchPerNumManager(personnelNum) != -1 || searchPerNumFacility(personnelNum) != -1)
    {
        Account* acc = getAcc(accNumber);
        if (acc == nullptr)
        {
            MessageBox::Show("There isn't any account with this account number!\n"); // throw an exception
            return;
        }
        acc->_active = false;
    }
    else
        throw Exception("Access denied!\n"); // throw an exception

    time_t now = time(0);
    string nowDateAndTime(asctime((localtime(&now))));
    nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);

    string report = "Account with account number ";
    report += to_string(accNumber);
    report += " on " + nowDateAndTime;
    report += " his/her account were activated.";

    addReport(report); // add a report 
}

bool Bank::addLoan(const int64_t& personnelNum, Account* acc, const int64_t& amountLoan) // add a loan
{
    checkMngrAndFac(); // checking manager and facility
    bool accepted = false;

    if (searchPerNumFacility(personnelNum) != -1 || searchPerNumManager(personnelNum) != -1)
    {
        int index = 0;
        int size = Request::_accountsOfLoanApplicants.size();
        for (int i = 0; i < size; i++)
            if (Request::_accountsOfLoanApplicants[i] == acc)
            {
                index = i;
                break;
            }
        if (acc->getGreatBalDays() > 1)
        {

            acc->_isLoanAccepted = true;
            Loan* loan = new Loan(acc->getNatCode(), acc->getAccNumber(), amountLoan, Request::_typeOfLoanApplicants[index], this); // adfadf
            _loans.push_back(loan); // push a loan to loan's
            Request::_accountsOfLoanApplicants.erase(Request::_accountsOfLoanApplicants.begin() + index);
            Request::_typeOfLoanApplicants.erase(Request::_typeOfLoanApplicants.begin() + index);
            _todayLoanStatus = true;
            acc->_balance += amountLoan;

            accepted = true;
            MessageBox::Show("The loan information send to the client with national code " + acc->getNatCode());
            //<< *loan << endl;
        }
        else
        {
            acc->_isLoanRequested = false;
            Request::_accountsOfLoanApplicants.erase(Request::_accountsOfLoanApplicants.begin() + index);
            Request::_typeOfLoanApplicants.erase(Request::_typeOfLoanApplicants.begin() + index);
        }
    }

    else
        throw Exception("Access denied!\n"); // throw an exception

    time_t now = time(0);
    string nowDateAndTime(asctime((localtime(&now))));
    nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);

    string report = "Account with account number ";
    report += to_string(acc->getAccNumber());
    report += " on " + nowDateAndTime;
    report += " received a loan in the amount of";
    report += to_string(amountLoan);

    addReport(report); // add a report
    return accepted;
}

vector<Account*> Bank::getAccList(const int64_t& natCode) // return account list
{
    checkMngrAndFac(); // checking manager and facility
    vector<Account*> accList; // vector of account's who saved account list's
    int size = _accountsList.size();
    for (int i = 0; i < size; i++)
        if (_accountsList[i]->getNatCode() == natCode)
            accList.push_back(_accountsList[i]);

    return accList;
}

Account* Bank::getAcc(const int64_t accNumber) // return an account
{
    checkMngrAndFac(); // checking manager and facility

    int size = _accountsList.size();
    for (int i = 0; i < size; i++)
        if (_accountsList[i]->getAccNumber() == accNumber)
            return _accountsList[i];

    return nullptr;
}

Client* Bank::getClient(const int64_t& natCode) const // return a client
{
    checkMngrAndFac(); // checking manager and facility
    int index = searchNatCodeCl(natCode);

    if (index == -1)
    {
        MessageBox::Show("There is not such a client with this national code!\n"); // throw an exception
        return nullptr;
    }
    else  
        return _clients[index];
}

void Bank::checkMngrAndFac() const // checking manager and facility
{
    if (_existManager)
        return;
    throw Exception("Not find such a manager!\n"); // throw an exception
}

int Bank::searchPerNumEmp(const int64_t& personnelNum) const // search personnel number for employee
{
    checkMngrAndFac(); // checking manager and facility
    int size = _employees.size();
    for (int i = 0; i < size; i++)
        if (personnelNum == _employees[i]->getPersonnelNumber())
            return i;

    return -1;
}

int Bank::searchNatCodeCl(const int64_t& natCode) const // search national coded for client
{
    checkMngrAndFac(); // checking manager and facility
    int size = _clients.size();
    for (int i = 0; i < size; i++)
        if (natCode == _clients[i]->getNatCode())
            return i;

    return -1;
}

int Bank::searchPerNumManager(const int64_t& personnelNum) const // search personnel number for manager
{
    checkMngrAndFac(); // checking manager and facility
    if (personnelNum == _manager->getPersonnelNumber())
        return 1;

    return -1;
}

int Bank::searchPerNumFacility(const int64_t& personnelNum) const // search personnel number for facility
{
    checkMngrAndFac(); // checking manager and facility
    if (personnelNum == _facility->getPersonnelNumber())
        return 1;

    return -1;
}

int Bank::searchSerNumLoan(const int64_t& serialNum) const // search serial number for loan
{
    checkMngrAndFac(); // checking manager and facility

    int size = _loans.size();
    for (int i = 0; i < size; i++)
        if (serialNum == _loans[i]->getSerialNumber())
            return i;

    return -1;
}

bool Bank::getToDayLoanStatus(const int64_t& personnelNum) // return loan status for today
{
    checkMngrAndFac(); // checking manager and facility
    if (searchPerNumManager(personnelNum) != -1 || searchPerNumFacility(personnelNum) != -1)
        return _todayLoanStatus;
    throw Exception("Access denied!\n"); // throw an exception
}

Client* Bank::getClient(const string& user, const string& pass) const // return client
{
    Client* cl = nullptr;
    for (auto i : _clients)
        if (i->getUsername() == user && i->getPass() == pass)
            return i;

    return cl;
}

Employee* Bank::getEmployee(const string& user, const string& pass) const // return an employee
{
    Employee* emp = nullptr;
    for (auto i : _employees)
        if (i->getUsername() == user && i->getPass() == pass)
            return i;
    return emp;
}

Manager* Bank::getManager(const string& user, const string& pass) const // return a manager
{
    Manager* mngr = nullptr;

    if (_manager->getUsername() == user && _manager->getPass() == pass)
        mngr = _manager;

    return mngr;
}

Facility* Bank::getFacility(const string& user, const string& pass) const // reeturn a facility 
{
    Facility* fac = nullptr;
    if (_facility->getUsername() == user && _facility->getPass() == pass)
        fac = _facility;

    return fac;
}

void Bank::addReport(const string& report) const // add report
{
    _sqlServer->addReport(report);
}

Bank& Bank::operator=(const Bank& bank) // overlaoding = operator 
{
    copyClients(bank._clients);
    copyAccountsList(bank._accountsList);
    copyEmployees(bank._employees);
    copyFacility(bank._facility);
    copyManager(bank._manager);
    copyLoans(bank._loans);
    _branchCode = bank._branchCode;
    _existManager = bank._existManager;
    _branchName = bank._branchName;
    _todayLoanStatus = bank._todayLoanStatus;
    return *this;
}

Client* Bank::inputInfoCl(const int64_t& natCode) // input information for client
{
    string name, lastname, username, password;
    int bDay, bMonth, bYear;
    Date bd;

    MessageBox::Show("Name: ");
    cin >> name;

    MessageBox::Show("Last name: ");
    cin >> lastname;

    MessageBox::Show("Birthday day: ");
    cin >> bDay;

    MessageBox::Show("Birthday month: ");
    cin >> bMonth;

    MessageBox::Show("Birthday year: ");
    cin >> bYear;
    cin.get();

    bd.setDate(bMonth, bDay, bYear);

    MessageBox::Show("username: ");
    cin >> username;

    MessageBox::Show("password: ");
    cin >> password;
    cin.get();

    Client* client = new Client(name, lastname, bd, natCode, username, password, this);
    return client;
}

void Bank::deActivateAllAcc(const int64_t& natCode) // deactive all account's
{
    vector<Account*> _accs = getAccList(natCode);
    int size = _accs.size();
    if (size == 0)
    {
        MessageBox::Show("There isn't any account with this national code!\n"); // throw an exception
        return;
    }
        
    for (int i = 0; i < size; i++)
        _accs[i]->_active = false;

    time_t now = time(0);
    string nowDateAndTime(asctime((localtime(&now))));
    nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);

    string report = "Client with national code ";
    report += to_string(natCode);
    report += " on " + nowDateAndTime;
    report += "all his/her accounts were deactivated.";

    addReport(report);
}

void Bank::activeAllAcc(const int64_t& natCode) // active all account
{
    vector<Account*> _accs = getAccList(natCode);
    int size = _accs.size();
    if (size == 0)
        throw Exception("There isn't any account with this national code!\n"); // throw an exception
    for (int i = 0; i < size; i++)
        _accs[i]->_active = true;

    time_t now = time(0);
    string nowDateAndTime(asctime((localtime(&now))));
    nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);

    string report = "Client with national code ";
    report += to_string(natCode);
    report += " on " + nowDateAndTime;
    report += "all his/her accounts were activated.";

    addReport(report); // add a report
}

void Bank::withdrawIns(const int64_t& accNum, const int64_t& amountIns) // withdraw installment
{
    Account* acc = getAcc(accNum);
    if (acc->_balance < amountIns)
    {
        throw Exception("today balance is not enough to pay off the loan"); // throw an exception
    }
    acc->_balance -= amountIns;

    time_t now = time(0);
    string nowDateAndTime(asctime((localtime(&now))));
    nowDateAndTime = nowDateAndTime.substr(0, nowDateAndTime.size() - 1);

    string report = "Account with account number ";
    report += to_string(accNum);
    report += " on " + nowDateAndTime;
    report += " paid its installment.";

    addReport(report); // add a report
}

bool Bank::setBrCode(const int64_t& brCode) // set branch code
{
    if (brCode <= 0)
        throw Exception("Wrong! branch code should not negative\n"); // throw an exception
    else
    {
        for (auto i : _allBrCode)
            if (i == brCode)
            {
                _branchCode = i;
                return true;
            }
        _branchCode = brCode;
        return false;
    }
}

bool Bank::checkBrCode(const int64_t& brCode) // check branch code
{
    for (auto i : _allBrCode)
        if (i == brCode)
            return false;
    return true;
}

void Bank::setLeaveHoursEmp(Employee* emp, const int64_t& hours) // set leave hour for employees of the bank
{
    emp->_leaveHours += hours;
    if (emp->_leaveHours > 15)
        emp->_monthlySalary -= (emp->_leaveHours - 15) * 100000;
}

void Bank::setExtraHoursEmp(Employee* emp, const int64_t& hours) // set overtime hour for employees of the bank
{
    emp->_monthlySalary += hours * 120000;
    emp->_extraHours += hours;
}

void Bank::incOneDay() // increase one day to days after founding bank
{
    for (auto i : _accountsList)
        i->incOneDay();
    for (auto i : _loans)
        i->incOneDay();

    ++_NumOfDaysOpeningBank;
    if (_NumOfDaysOpeningBank % 30 == 0)
    {
        for (auto i : _employees)
        {
            i->_extraHours = 0;
            i->_leaveHours = 0;
        }
    }
}
