#ifndef ADMINUSER_H
#define ADMINUSER_H

#include "BaseUser.h" // Incluye el archivo de cabecera de BaseUser

class AdminUser : public BaseUser // Declara AdminUser como subclase de BaseUser
{
public:
    void helloAdmin(); // Define la función específica de AdminUser
};

#endif // ADMINUSER_H