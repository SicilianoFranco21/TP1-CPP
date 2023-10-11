#include "Menu.hpp"
#include "Lector.hpp"

/* 

std::string colorearTexto(std::string color) {
    std::string color_elegido = "";
    if (color == "Rojo") {
        color_elegido += "\x1b[31m";
    }
    else if (color == "Amarillo") {
        color_elegido += "\x1b[33m";
    }
    else if (color == "Azul") {
        color_elegido += "\x1b[34m";
    }
    else {
        color_elegido += "\x1b[0m";
    }
    return color_elegido;
}

*/


void Menu::mostrarMenuOpciones() {
    std::cout << "\n@----------------------------------------------@" << std::endl;
    std::cout << "|         *** INVENTARIO DE JAMES ***          |" << std::endl;
    std::cout << "|             [1] - Agregar item               |" << std::endl;
    std::cout << "|             [2] - Borrar item                |" << std::endl;
    std::cout << "|             [3] - Mostrar items              |" << std::endl;
    std::cout << "|             [4] - Salir                      |" << std::endl;
    std::cout << "@----------------------------------------------@" << std::endl;
}


void Menu::ingresarOpcion(std::string& opcion, std::string mensaje) {
    std::cout << mensaje;
    std::cin >> opcion;
}


void Menu::ejecutarMenuPrincipal(Inventario inventario) {
    
    mostrarMenuOpciones();

    std::string opcion;
    ingresarOpcion(opcion, "> Ingrese una opcion para comenzar: ");
    std::system("clear");
    Item itemUno("Item 1", "Uno");
    while (opcion != "4") {
        if (opcion == "1") {
            inventario.agregarItem(&itemUno);
        }
        else if (opcion == "2") {
            // Llamar a funcionalidades de vector
            inventario.borrarItem();
        }
        else if (opcion == "3") {
            // Llamar a funcionalidades de vector
            inventario.mostrarItems();
        }
        else {
            std::cout << "(>_<) NO ha ingresado una opcion valida!!! (>_<)" << std::endl;
            
        }
        std::cout << "\n================================================" << std::endl;
        mostrarMenuOpciones();
        ingresarOpcion(opcion, "> Ingrese una opcion para continuar: ");
        std::system("clear");
    }
    std::cout << "Gracias por usar el inventario de James! Hasta luego\nPD: Jugate 'Silent Hill 4: The room'" << std::endl;
    Lector::agregarItemAlFinal("testSaveFile.csv", inventario.almacenamientoItems);
}