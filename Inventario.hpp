#ifndef INVENTARIO_H
#define INVENTARIO_H


#include "Vector.hpp"


class Inventario {
    private:
        Vector* miVector;
        size_t capacidadMaximaAlmacenamiento;

    public:
        void agregarItem(Vector* almacenamientoItems);

        void mostrarItems();

        void guardarItems(std::string ruta_archivo);


};

#endif