#include <iostream>
#include "BaseUser.h"
#include "AdminUser.h"

using namespace std;

int main()
{
    BaseUser user;
    user.setUserName("felipe");
    user.setPassword("User123");
    cout << "su usuario es: " << user.getUserName() << ", su password es" << user.getPassword() << endl; 
    AdminUser admin;
    admin.helloAdmin();
    admin.setUserName("admin");
    cout << "hello SR: " << admin.getUserName() << endl;
    return 0;
}