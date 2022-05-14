#include "Exception.h"
#include "User.h"
#include <string>
#include <iostream>

using namespace System::Windows::Forms;
using System::String;

using namespace std;

vector<string> User::_allUsernames; // vector of string who point to all users

User::User(const string& username, const string& pass) // constructor
{
    checkUsername(username); // check username
    checkPass(pass); // check password

    _password = pass;
    _username = username;

    _allUsernames.push_back(_username); // push user to allUser
}

User::User(const User& user) // copy constructor
{
    *this = user;
}

string User::getPass() const { return _password; } // return pass

string User::getUsername() const { return _username; } // return username

void User::setPass(const string& pass) // set password
{
    checkPass(pass); // check password
    _password = pass;
}

bool User::checkUsername(const string& username) // check username
{
    int size = _allUsernames.size();
    if (username.length() < 6) // check size username
        return false;

    for (int i = 0; i < size; i++) // reapet loop
        if (!_allUsernames[i].compare(username)) // condition
            return false;
    return true;
}

bool User::changePass(const string& currentPass, const string& newPass) // change password
{
    if (currentPass == _password && newPass != currentPass) // check 
    {
        _password = newPass;
        return true;
    }
    return false;
}

bool User::checkPass(const string& pass) // checking password
{
    if (pass.size() < 8) // check size password
        return false;
    return true;
}

User& User::operator=(const User& user) // oveloding = operator
{
    _username = user._username;
    _password = user._password;

    return *this;
}

ostream& operator<<(ostream& out, const User& user) // oveloding << operator
{
    out << "user: " << user.getUsername() << "\n";
    out << "password: " << user.getPass() << "\n";

    return out;
}