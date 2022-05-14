#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include "ReadAndWriteFile.h"
#include "Date.h"
#include "Exception.h"
#include "Bank.h"
#include "Manager.h"
#include <direct.h>
using namespace System::Windows::Forms;
using System::String;
using namespace std;

ReadAndWriteFile::ReadAndWriteFile(Bank* bank) // constructor
{
    _bank = bank;
    _path = ""; // ../ ???
    _branchPath = "BranchCodeList";
}

void ReadAndWriteFile::addReport(const string& rep)
{
    _path = "";
    _path += _bank->_branchName;
    _path += "_" + to_string(_bank->_branchCode);

    ofstream file(_path + "/report.txt", ios::app); // open file in mode append

    if (!file.is_open()) // if the file does not open, we throw an exception
        throw Exception("File couldn't be opened!\n"); // throw an exception

    file << rep << endl;
    file.close(); // close file
}

string ReadAndWriteFile::getReport()
{
    ifstream file("report.txt", ios::in);

    if (!file.is_open()) // if the file does not open, we throw an exception
        throw Exception("File couldn't be opened!\n"); // throw an exception

    string report, temp;
    while (!file.eof()) // untill cursor arrive to the end of file
    {
        getline(file, temp);
        report += temp;
    }

    file.close(); // close file
    return report;
}

void ReadAndWriteFile::readListOfBranchCodes() // read list of branch codes
{
    mkdir(_branchPath.c_str());
    ofstream open(_branchPath + "/branch_codes.txt", ios::app); // agar baz nabod besaze // one
    open.close(); // close file

    ifstream file(_branchPath + "/branch_codes.txt", ios::in);
    if (!file.is_open())
        throw Exception("File couldn't be opened!\n"); // throw an exception

    if (file.peek() == ifstream::traits_type::eof()) // file is empty
    {
        file.close();
        return; // in excep baseh behtare?????
    }

    vector <int64_t> brCodes;
    int64_t temp;
    while (!file.eof())
    {
        file >> temp;
        brCodes.push_back(temp); // push temp in brCodes
        file.get(); // read \n
    }
    _bank->_allBrCode = brCodes;
    file.clear();
    file.close(); // close file
}

void ReadAndWriteFile::createNewBankSqlServer() // creat sql server for new bank
{
    _path = "";
    _path += _bank->_branchName;
    _path += "_" + to_string(_bank->_branchCode);

    mkdir(_path.c_str());
    ofstream file;
    file.open(_path + "/bank.txt"); // open file
    file << _bank->_branchName << '\n' << _bank->_branchCode << '\n' << 0 << endl;
    file.close(); // close file

    file.open(_path + "/manager.txt"); // open file
    file.close(); // close file

    file.open(_path + "/facility.txt"); // open file
    file.close(); // close file

    file.open(_path + "/employees.txt"); // open file
    file.close(); // close file

    file.open(_path + "/clients.txt"); // open file
    file.close(); // close file

    file.open(_path + "/accounts.txt"); // open file
    file.close(); // close file

    file.open(_path + "/loans.txt"); // open file
    file.close(); // close file

    file.open(_path + "/requests.txt"); // open file
    file.close(); // close file

    file.open(_path + "/report.txt"); // open file
    file.close(); // close file

    file.open(_branchPath + "/branch_codes.txt", ios::in); // open file
    file << _bank->_branchCode << endl;
    file.close(); // close file

    MessageBox::Show("The bank was built, but the manager and the facilitation must be created");
    // cout << "The bank was built, but the manager and the facilitation must be created\n";
}

void ReadAndWriteFile::writeInfoBank() // write info bank in file
{
    if (!_bank->_existManager)
        return; // cout << ???

    _path = "";
    _path += _bank->_branchName;
    _path += "_" + to_string(_bank->_branchCode);
    //MessageBox::Show("adf1");
    writeBank(_path + "/bank.txt"); // write info Bank in file
    //MessageBox::Show("adf2");

    writeManager(_path + "/manager.txt"); // write info Manager in file
    //MessageBox::Show("adf3");

    writeFacility(_path + "/facility.txt"); // write info Facility in file
    writeEmployees(_path + "/employees.txt"); // write info Employees in file
    writeClients(_path + "/clients.txt"); // write info Clients in file
    writeAccounts(_path + "/accounts.txt"); // write info Accounts in file
    writeLoans(_path + "/loans.txt"); // write info Loans in file
    writeRequests(_path + "/requests.txt"); // write info Requests in file
}

void ReadAndWriteFile::writeBank(const string& path) // write info bank in file
{
    ofstream file(path, ios::out); // open file in output mode

    if (!file.is_open()) // if the file does not open, we throw an exception
        throw Exception("File couldn't be opened!\n"); // throw an exception

    file << _bank->_branchName << '\n' << _bank->_branchCode << endl;
    file.close(); // close file

    file.open(_branchPath + "/branch_codes.txt", ios::out); // open file
    if (!file.is_open())// if file close
        throw Exception("File couldn't be opened!\n");// throw an  exception

    for (auto i : _bank->_allBrCode)
        file << i << "\n";

    file.close(); // close file
}

void ReadAndWriteFile::writeManager(const string& path) // write info manager in file
{
    ofstream file(path, ios::out); // open file in output mode

    if (!file.is_open()) // if the file does not open, we throw an exception
        throw Exception("File couldn't be opened!\n"); // throw an exception

    writeEmployee(_bank->_manager, file);
    file.close(); // close file
}

void ReadAndWriteFile::writeFacility(const string& path) // write info facility in file
{
    ofstream file(path, ios::out); // open file in output mode

    if (!file.is_open()) // if the file does not open, we throw an exception
        throw Exception("File couldn't be opened!\n"); // throw an exception

    writeEmployee(_bank->_facility, file);
    file.close(); // close file
}

void ReadAndWriteFile::writeEmployees(const string& path) // write info employee's in file
{
    ofstream file(path, ios::out); // open file in output mode
    if (!file.is_open()) // if the file does not open, we throw an exception
        throw Exception("File couldn't be opened!\n"); // throw an exception

    vector <Employee*> emps = _bank->_employees; // vector of employee
    for (auto i : emps)
        writeEmployee(i, file);

    file.close(); // close file
}

void ReadAndWriteFile::writeEmployee(const Employee* emp, ofstream& file) // write info an employee in file
{
    if (emp == nullptr)
        return;
    writePersInfo(emp, emp, file);
    file << emp->getPersonnelNumber() << '\n'
        << emp->getBaseSalary() << '\n'
        << emp->getLeaveHours() << '\n'
        << emp->getExtraHours() << '\n'
        << "\n*\n" << endl;
}

void ReadAndWriteFile::writeClients(const string& path) // write info client's in file
{
    ofstream file(path, ios::out); // open file in output mode

    if (!file.is_open()) // if the file does not open, we throw an exception
        throw Exception("File couldn't be opened!\n"); // throw an exception

    vector <Client*> clients = _bank->_clients; // vector of client
    for (auto i : clients)
        writeClient(i, file);

    file.close(); // close file
}

void ReadAndWriteFile::writeClient(const Client* cli, ofstream& file) // write info a client in file
{
    writePersInfo(cli, cli, file);
    file << "\n*\n" << endl;
}

void ReadAndWriteFile::writeLoans(const string& path) // write info loan's in file
{
    ofstream file(path, ios::out); // open file in output mode

    if (!file.is_open()) // if the file does not open, we throw an exception
        throw Exception("File couldn't be opened!\n"); // throw an exception

    vector <Loan*> loans = _bank->_loans; // vector of loan
    for (auto i : loans)
        writeLoan(i, file);

    file.close(); // close file
}

void ReadAndWriteFile::writeLoan(const Loan* loan, ofstream& file) // write info a loan in file
{
    file << loan->_accNumber << '\n'
        << loan->_loanType << '\n'
        << loan->_nationalCode << '\n'
        << loan->getDateReceived() << '\n'
        << loan->_loanAmount << '\n'
        << loan->_loanInterest << '\n'
        << loan->_amountInstallments << '\n'
        << loan->_paidInstallments << '\n'
        << loan->_paidLoanAmount << '\n'
        << loan->_overdueInstallments << '\n'
        << loan->_loanSerialNumber << '\n'
        << "\n*\n" << endl;
}

void ReadAndWriteFile::writeAccounts(const string& path) // write info account's in file
{
    ofstream file(path, ios::out); // open file in output mode

    if (!file.is_open()) // if the file does not open, we throw an exception
        throw Exception("File couldn't be opened!\n"); // throw an exception

    vector <Account*> accs = _bank->_accountsList; // vector of account's
    for (auto i : accs)
        writeAccount(i, file);
}

void ReadAndWriteFile::writeAccount(const Account* acc, ofstream& file) // write info an account in file
{
    file << acc->_accountNumber << '\n'
        << acc->_nationalCode << '\n'
        << acc->_openAccDate << '\n'
        << acc->_balance << '\n'
        << acc->_greatBalDays << '\n'
        << acc->_active << '\n'
        << acc->_activeDays << '\n'
        << acc->_isLoanRequested << '\n'
        << acc->_isLoanAccepted << '\n'
        << "\n*\n" << endl;
}

void ReadAndWriteFile::writeRequests(const string& path) // write info request's in file
{
    ofstream file(path, ios::out); // open file in output mode

    if (!file.is_open()) // if the file does not open, we throw an exception
        throw Exception("File couldn't be opened!\n"); // throw an exception
    if (_bank->_manager == nullptr)
        return;

    int64_t personnelNum = _bank->_manager->getPersonnelNumber();
    vector <Account*> accs = _bank->getAccsReqLoans(personnelNum);
    vector <LoanType> lts = _bank->getLoansTypeReqLoans(personnelNum);

    int size = accs.size();
    for (int i = 0; i < size; i++)
        file << accs[i]->_accountNumber << '\n'
        << lts[i] << "\n\n*\n" << endl;

    file.close(); // close file
}

void ReadAndWriteFile::writePersInfo(const Person* person, const User* user, ofstream& file) // write personal info in file
{
    file << person->getName() << '\n'
        << person->getLastName() << '\n'
        << person->getNatCode() << '\n'
        << person->getbDate() << endl;

    // user
    file << user->getUsername() << '\n'
        << user->getPass() << endl;
}

// // // // // // // // // // // // // // // // // // // // // // // // // // // // // //

void ReadAndWriteFile::readInfoBank() // read info bank from file
{
    _path = "";
    _path += _bank->_branchName;
    _path += "_" + to_string(_bank->_branchCode);

    readBank(_path + "/bank.txt");
    readManagerAndFacility(_path + "/manager.txt", _path + "/facility.txt");
    readEmployees(_path + "/employees.txt");
    readClients(_path + "/clients.txt");
    readAccounts(_path + "/accounts.txt");
    readLoans(_path + "/loans.txt");
    readRequests(_path + "/requests.txt");
}

void ReadAndWriteFile::readBank(const string& path) // read info bank from file
{
    ifstream file(path, ios::in); // open file in input mode


    if (!file.is_open()) // if the file does not open, we throw an exception
        throw Exception("File couldn't be opened!\n"); // throw an exception
    if (file.peek() == ifstream::traits_type::eof())
    {
        file.close(); // close file
        return;
    }

    string brName;
    int brCode;

    getline(file, brName);
    file >> brCode;
    _bank->_branchName = brName;
    _bank->_branchCode = brCode;

    file.close(); // close file
}

void ReadAndWriteFile::readManagerAndFacility(const string& pathM, const string& pathF) // read info manager and facility from file
{
    try {
        Manager* mngr = readManager(pathM);
        Facility* fac = readFacility(pathF);
        _bank->_manager = mngr;
        _bank->_facility = fac;
        _bank->_existManager = true;
    }
    catch (Exception ex) {
        String^ str = gcnew String(ex.show().c_str());
        MessageBox::Show(str + " or This bank haven't manager and facility!");
    }
}

Manager* ReadAndWriteFile::readManager(const string& path) // read info manager from file
{
    ifstream file(path, ios::in); // open file in input mode

    if (!file.is_open()) // if the file does not open, we throw an exception
        throw Exception("File couldn't be opened!\n"); // throw an exception

    if (file.peek() == ifstream::traits_type::eof())
        throw Exception("Manager not exist!\n");


    string name, lname, user, pass;
    int leaveHours, extraHours;
    int64_t natCode, baseSalary, personnelNum;
    Date bDate;

    readInfoEmp(name, lname, bDate, natCode, user, pass, baseSalary, personnelNum, extraHours, leaveHours, file);
    Manager* mngr = new Manager(name, lname, bDate, natCode, user, pass, _bank, baseSalary, personnelNum);

    _bank->setExtraHoursEmp(mngr, extraHours);
    _bank->setExtraHoursEmp(mngr, leaveHours);

    file.close(); // close file
    return mngr;
}

Facility* ReadAndWriteFile::readFacility(const string& path) // read info facility from file
{
    ifstream file(path, ios::in); // open file in input mode

    if (!file.is_open()) // if the file does not open, we throw an exception
        throw Exception("File couldn't be opened!\n"); // throw an exception
    if (file.peek() == ifstream::traits_type::eof())
        throw Exception("Facility not exist!\n");

    string name, lname, user, pass;
    int leaveHours, extraHours;
    int64_t natCode, baseSalary, personnelNum;
    Date bDate;

    readInfoEmp(name, lname, bDate, natCode, user, pass, baseSalary, personnelNum, extraHours, leaveHours, file);

    Facility* fac = new Facility(name, lname, bDate, natCode, user, pass, _bank, baseSalary, personnelNum);
    _bank->setExtraHoursEmp(fac, extraHours);
    _bank->setExtraHoursEmp(fac, leaveHours);

    file.close(); // close file
    return fac;
}

void ReadAndWriteFile::readEmployees(const string& path) // read info employee from file
{
    ifstream file(path, ios::in); // open file in input mode

    if (!file.is_open()) // if the file does not open, we throw an exception
        throw Exception("File couldn't be opened!\n"); // throw an exception

    if (file.peek() == ifstream::traits_type::eof())
    {
        file.close(); // close file
        return;
    }

    vector <Employee*> emps; // vector of employee
    while (!file.eof())
        emps.push_back(readEmployee(file));

    _bank->_employees = emps;
    file.close(); // close file
}

Employee* ReadAndWriteFile::readEmployee(ifstream& file) // read info employee's from file
{
    string name, lname, user, pass;
    int leaveHours, extraHours;
    int64_t natCode, baseSalary, personnelNum;
    Date bDate;

    readInfoEmp(name, lname, bDate, natCode, user, pass, baseSalary, personnelNum, extraHours, leaveHours, file);
    Employee* emp = new Employee(name, lname, bDate, natCode, user, pass, _bank, baseSalary, personnelNum);

    _bank->setExtraHoursEmp(emp, extraHours);
    _bank->setExtraHoursEmp(emp, leaveHours);

    return emp;
}

void ReadAndWriteFile::readClients(const string& path) // read info client's from file
{
    ifstream file(path, ios::in); // open file in input mode

    if (!file.is_open()) // if the file does not open, we throw an exception
        throw Exception("File couldn't be opened!\n"); // throw an exception

    if (file.peek() == ifstream::traits_type::eof())
    {
        file.close(); // close file
        return;
    }

    vector <Client*> cls; // vector of client's
    while (!file.eof())
        cls.push_back(readClient(file));

    _bank->_clients = cls;
    file.close(); // close file
}

Client* ReadAndWriteFile::readClient(ifstream& file) // read info a client from file
{
    string name, lName, user, pass;
    Date bDate;
    int64_t natCode;
    char ch;

    readPersInfo(name, lName, bDate, natCode, user, pass, file); // read personal info from file 
    Client* cli = new Client(name, lName, bDate, natCode, user, pass, _bank);

    file.get(); // read \n
    file.get(); // read \n
    file.get(ch);
    if (ch != '*')
        throw Exception("Format is wrong!\n");
    file.get(ch); // read \n
    file.get(); // read \n 
    if (file.peek() == ifstream::traits_type::eof())
    {
        file.get(); // read
    }

    return cli;
}

void ReadAndWriteFile::readLoans(const string& path) // read info loan's from file
{
    ifstream file(path, ios::in); // open file in input mode

    if (!file.is_open()) // if the file does not open, we throw an exception
        throw Exception("File couldn't be opened!\n"); // throw an exception

    if (file.peek() == ifstream::traits_type::eof())
    {
        file.close(); // close file
        return;
    }

    vector <Loan*> loans; // vector of loan
    while (!file.eof())
        loans.push_back(readLoan(file));

    file.close(); // close file
    _bank->_loans = loans;
}

Loan* ReadAndWriteFile::readLoan(ifstream& file) // read info a loan from file
{
    int64_t accNum, natCode, loanAmount, loanInterest, loanSerialNumber, amountInstallments, paidLoanAmount;
    int paidInstallments, overdueInstallments, help;
    LoanType lt;
    string str;
    Date bDate;
    char ch;

    file >> accNum >> help >> natCode >> str >> loanAmount >> loanInterest
        >> amountInstallments >> paidInstallments >> paidLoanAmount >> overdueInstallments >> loanSerialNumber;

    file.get(); // read \n
    file.get(); // read \n
    file.get(ch);
    if (ch != '*')
        throw Exception("Format is wrong!\n");
    file.get(ch); // read \n
    file.get(); // read \n 
    if (file.peek() == ifstream::traits_type::eof())
    {
        file.get(); // read
    }

    if (help == 4)
        lt = LoanType(month_12);
    else if (help == 8)
        lt = LoanType(month_24);
    else if (help == 12)
        lt = LoanType(month_36);
    else
        throw Exception("Input number is invalid!\n");

    bDate = strToDate(str);

    Loan* loan = new Loan(natCode, accNum, loanAmount, lt, _bank, loanSerialNumber);
    loan->_loanInterest = loanInterest;
    loan->_paidInstallments = paidInstallments;
    loan->_overdueInstallments = overdueInstallments;
    loan->_amountInstallments = amountInstallments;
    loan->_paidLoanAmount = paidLoanAmount;

    return loan;
}

void ReadAndWriteFile::readAccounts(const string& path) // read info account's from file
{
    ifstream file(path, ios::in); // open file in input mode

    if (!file.is_open()) // if the file does not open, we throw an exception
        throw Exception("File couldn't be opened!\n"); // throw an exception

    if (file.peek() == ifstream::traits_type::eof())
    {
        file.close(); // close file
        return;
    }

    vector <Account*> accs; // vector of account's
    while (!file.eof())
        accs.push_back(readAccount(file));

    _bank->_accountsList = accs;
    file.close();
}

Account* ReadAndWriteFile::readAccount(ifstream& file) // read info an account from file
{
    int64_t accNum, natCode, balance, greatBalDays;
    int activeDays;
    string str;
    Date date;
    bool active, isLoanRequested, isLoanAccepted;
    char ch;

    file >> accNum >> natCode >> str >> balance >> greatBalDays
        >> active >> activeDays >> isLoanRequested >> isLoanAccepted;

    file.get(); // read \n
    file.get(); // read \n
    file.get(ch);
    if (ch != '*')
        throw Exception("Format is wrong!\n");
    file.get(ch); // read \n
    file.get(); // read \n
    if (file.peek() == ifstream::traits_type::eof())
    {
        file.get(); // read
    }

    date = strToDate(str);

    Account* acc = new Account(natCode, _bank, balance, accNum);
    acc->_openAccDate = date;
    acc->_greatBalDays = greatBalDays;
    acc->_active = active;
    acc->_activeDays = activeDays;
    acc->_isLoanRequested = isLoanRequested;
    acc->_isLoanAccepted = isLoanAccepted;

    return acc;
}

void ReadAndWriteFile::readRequests(const string& path) // read info request's from file
{
    ifstream file(path, ios::in); // open file in input mode

    if (!file.is_open()) // if the file does not open, we throw an exception
        throw Exception("File couldn't be opened!\n"); // throw an exception
    if (file.peek() == ifstream::traits_type::eof())
    {
        file.close(); // close file
        return;
    }

    int64_t accNum;
    Account* acc; // vector of account's
    LoanType lt; // vector of loan type's
    Request* request = Request::create();
    int help;
    char ch;

    while (!file.eof())
    {
        file >> accNum >> help;

        file.get();
        file.get(); // read \n
        file.get(ch);
        if (ch != '*')
            throw Exception("Format is wrong!\n");
        file.get(ch); // read \n
        file.get(); // read \n 
        if (file.peek() == ifstream::traits_type::eof())
        {
            file.get(); // read
        }

        if (help == 4)
            lt = LoanType(month_12);
        else if (help == 8)
            lt = LoanType(month_24);
        else if (help == 12)
            lt = LoanType(month_36);
        else
            throw Exception("Input number is invalid!\n");

        acc = _bank->getAcc(accNum);
        Request::addReqLoan(acc, lt);
    }

    file.close(); // close file
}

void ReadAndWriteFile::readPersInfo(string& name, string& lName, Date& bDate, int64_t& natCode, string& user, string& pass, ifstream& file) // read personal info from file
{
    string sDate;
    file >> name >> lName >> natCode >> sDate >> user >> pass;
    bDate = strToDate(sDate);
}

void ReadAndWriteFile::readInfoEmp(string& name, string& lname, Date& bDate, int64_t& natCode, string& user, string& pass, int64_t& baseSalary, int64_t& personnelNum, int& extraHours, int& leaveHours, ifstream& file) // read info an employee from file
{
    char ch;

    readPersInfo(name, lname, bDate, natCode, user, pass, file);
    file >> personnelNum >> baseSalary >> leaveHours >> extraHours;

    file.get(); // read \n
    file.get(); // read \n
    file.get(ch);
    if (ch != '*')
        throw Exception("Format is wrong!\n"); // throw an exception
    file.get(); // read \n
    file.get(); // read \n
    if (file.peek() == ifstream::traits_type::eof())
    {
        file.get(); // read
    }
}