#ifndef MENU_H
#define MENU_H


#include <iostream>
#include <string>
#include <cstdlib>
#include "Vector.hpp"
#include "Inventario.hpp"

class Menu {
    public:
        // PRE :
        // POST:
        static void mostrarMenuOpciones();


        // PRE :
        // POST:
        static void ingresarOpcion(std::string& opcion, std::string mensaje);


        // PRE :
        // POST:
        static void ejecutarMenuPrincipal(Inventario& inventario);
};

#endif