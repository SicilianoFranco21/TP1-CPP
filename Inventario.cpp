#include "Inventario.hpp"


Inventario::Inventario() {
    capacidadMaximaAlmacenamiento = 15;
}


void Inventario::agregarItem(Item* item) {
    almacenamientoItems.alta(item);
    std::cout << std::endl;
}


void Inventario::borrarItem() {
/*     size_t indice;
    std::cout << "Ingrese el indice del objeto a borrar: ";
    std::cin >> indice; */

/*     if (indice > almacenamientoItems.tamanio() || indice < 0) {
        std::cout << "Ha ingresado un indice invalido" << std::endl;
    }
    else {
        almacenamientoItems.baja();
    } */
    std::cout << *almacenamientoItems.baja() << std::endl;
}


void Inventario::mostrarItems() {
    for (size_t i = 0; i < almacenamientoItems.tamanio(); i++) {
        almacenamientoItems[i]->listarInformacion();
        std::cout << std::endl;
    }
}


void Inventario::guardarItems(std::string ruta_archivo) {
    // Crear metodo de Lector para procesar el archivo
    // Este metodo deberia agregar a almacenamientoItems los items indicados en el .csv
}