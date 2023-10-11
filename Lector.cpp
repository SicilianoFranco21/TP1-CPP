#include "Lector.hpp"



/* Item* Lector::generarItem(std::string linea) {

} */

void Lector::agregarItemAlFinal(const std::string& archivo, Vector& almacenamientoItems) {
    // Abre el archivo en modo de escritura en modo apéndice (agregar al final).
    std::ofstream archivoSalida(archivo, std::ios::app);

    // Verifica si el archivo se ha abierto correctamente.
    if (!archivoSalida.is_open()) {
        std::cerr << "No se pudo abrir el archivo." << std::endl;
        return;
    }

    // Escribe el objeto Item al final del archivo utilizando la sobrecarga del operador <<.
    for (size_t i = 0; i < almacenamientoItems.tamanio(); i++)
    archivoSalida << *almacenamientoItems[i] << std::endl;
    // Cierra el archivo.
    archivoSalida.close();
}


void Lector::procesarArchivo(Inventario* almacenamientoItems, std::string ruta_archivo) {
    std::ifstream archivoCSV(ruta_archivo);
    if (!archivoCSV.is_open()) {
        std::cerr << "Error al abrir el archivo CSV." << std::endl;
        return;
    }

    std::string linea;
    while (std::getline(archivoCSV, linea)) {
        std::istringstream lineaStream(linea);
        
        std::string tipo;
        std::string palabra;

        if (std::getline(lineaStream, tipo, ',')) {
            if (std::getline(lineaStream, palabra, ',')) {
                Item* item = new Item(tipo, palabra);
                almacenamientoItems->agregarItem(item);
            } else {
                std::cerr << "Error al leer la palabra para el tipo " << tipo << std::endl;
            }
        } else {
            std::cerr << "Error al leer el tipo en la línea: " << linea << std::endl;
        }
    }
    archivoCSV.close();
}