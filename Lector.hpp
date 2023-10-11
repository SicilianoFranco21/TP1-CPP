#ifndef LECTOR_HPP
#define LECTOR_HPP

#include "Inventario.hpp"
#include "Item.hpp"
#include "Vector.hpp"
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>


const int CANT_PARAMETROS = 2;
const std::string RUTA_ARCHIVO = "saveFile.csv";



class Lector {
    private:

        /* static Item* generarItem(std::string linea); */

    public:
        static void agregarItemAlFinal(const std::string& archivo, Vector& almacenamientoItems);
        static void procesarArchivo(Inventario* almacenamientoItems, std::string ruta_archivo);
};

#endif