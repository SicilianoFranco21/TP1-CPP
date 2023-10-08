/* #ifndef LECTOR_HPP
#define LECTOR_HPP

#include "Inventario.hpp"
#include "Item.hpp"
#include "Vector.hpp"


const int CANT_PARAMETROS = 2;
const std::string RUTA_ARCHIVO = "saveFile.csv";



class Lector {
    private:

        static Vector* split(std::string cadena, char del);

        static Item* generarItem(std::string linea);

    public:
        static void procesarArchivo(Vector* almacenamientoItems, std::string ruta_archivo);
};

#endif */