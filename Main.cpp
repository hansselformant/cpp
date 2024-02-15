#include <iostream>
#include "BaseUser.h"

using namespace std;

int main()
{
    BaseUser admin;
    admin.setUserName("felipe");
    admin.setPassword("Admin123");
    cout << "su usuario es: " << admin.getUserName() << ", su password es" << admin.getPassword() << endl; 
    // admin.hello();
    return 0;
}