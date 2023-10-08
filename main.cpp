#include "Menu.hpp"
#include "Inventario.hpp"


using namespace std;


int main() {
 /*    Item itemUno("Item 1", "Uno");
    Item itemDos("Item 2", "Dos");
    Item itemTres("Item 3", "Tres");
    Item itemCuatro("Item 4", "Cuatro");
    

    Inventario inventario;
    inventario.agregarItem(&itemUno);
    inventario.agregarItem(&itemDos);
    inventario.agregarItem(&itemTres);
    inventario.agregarItem(&itemCuatro);
    inventario.borrarItem();

    inventario.mostrarItems(); */

    Inventario inventario;
    Menu::ejecutarMenuPrincipal(inventario);
    cout << "El programa finalizo correctamente" << endl;
    return 0;
}