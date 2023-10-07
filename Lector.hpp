#ifndef LECTOR_HPP
#define LECTOR_HPP

#include "Inventario.hpp"
#include "Item.hpp"
#include "Vector.hpp"


const int CANT_PARAMETROS = 2;
const std::string RUTA_ARCHIVO = "saveFile.csv";



class Lector {
    private:
        Item* Lector::generarItem(std::string linea);
        static Vector* split(std::string cadena, char del);

    public:
        void Lector::procesarArchivo(Vector* almacenamientoItems, std::string ruta_archivo);
};

#endif