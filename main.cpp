#include "Menu.hpp"
#include "Inventario.hpp"
#include "Lector.hpp"


using namespace std;



int main() {
/*  Inventario inventario;
    // Menu::ejecutarMenuPrincipal(inventario);
    // inventario.guardar("ruta");
    Lector::procesarArchivo(&inventario, "saveFile.csv");
    cout << "-----------" << endl;
    inventario.mostrarItems();
    cout << "El programa finalizo correctamente" << endl; */
    
    Inventario inventario;
    Lector::procesarArchivo(&inventario, "testSaveFile.csv");
    Menu::ejecutarMenuPrincipal(inventario);
    return 0;
}