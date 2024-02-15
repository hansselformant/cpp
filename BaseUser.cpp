#include "BaseUser.h"
#include <string>

using namespace std;

BaseUser::BaseUser() {}

string BaseUser::getUserName() const
{
    // return this.userName;
    return userName;
}
void BaseUser::setUserName(const string& newUserName)
{
    userName = newUserName;
}
string BaseUser::getPassword() const
{
    // return this.password;
    return password;
}
void BaseUser::setPassword(const string& newPassword)
{
    password = newPassword;
}
void BaseUser::hello() const
{
    cout << "starting program" << endl;
}
// BaseUser::BaseUser()
// {

// }

// void BaseUser::hello()
//     {
//         cout << "starting program" << endl;
//     }
