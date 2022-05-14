//#pragma once
#ifndef USER_H // if not define
#define USER_H // define

#include <string>
#include <vector>

using namespace std;

class User
{
    // declare public method    
public:
    User(const string&, const string&); // constuctor : first element : username, second element : password
    User(const User&); // copy constuctor

    string getUsername() const; // return username
    string getPass() const; // return password

    void setPass(const string&); // set password
    bool changePass(const string&, const string&); // change password

    static bool checkUsername(const string&); // check username
    static bool checkPass(const string&); // check password

    User& operator=(const User&); // overloding = operator

// declare protected member    
protected:
    string _username;
    string _password;

    // declare private method    
private:
    static vector<string> _allUsernames;  // vector of string who point to all users
};
ostream& operator<<(ostream&, const User&); // oveloding << operator
#endif
