#ifndef INVENTARIO_H
#define INVENTARIO_H


#include "Vector.hpp"


class Inventario {
    public:
        Vector almacenamientoItems;
        size_t capacidadMaximaAlmacenamiento;

    public:
        // PRE:
        // POST: 
        Inventario();

        // PRE:
        // POST: 
        void agregarItem(Item* item);

        // PRE:
        // POST: 
        void borrarItem();

        // PRE:
        // POST: 
        void mostrarItems();

        // PRE:
        // POST: 
        void guardarItems(std::string ruta_archivo);
};

#endif