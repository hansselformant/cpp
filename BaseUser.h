#include <iostream>

using namespace std;

class BaseUser
{
    private:
        string userName;
        string password;
    public:
        BaseUser();
        string getUserName() const;
        void setUserName(const string& newUserName);
        string getPassword() const;
        void setPassword(const string& newPassword);
        void hello() const;

};