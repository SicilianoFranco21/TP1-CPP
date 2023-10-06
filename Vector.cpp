#include "Vector.hpp"


// Constructor
Vector::Vector() {
    this->tamanioMaximo = 0; // Asigna un valor inicial a tamanioMaximo
    this->datos = new Item*[tamanioMaximo];
    this->cantidadDatos = 0;
}


Vector& Vector::operator=(const Vector& otro) {
    // Comprobar si no estamos asignando el mismo objeto
    if (this != &otro) {
        // Liberar la memoria actual, si es necesario
        delete[] datos;

        // Realizar una copia profunda de los datos del otro objeto
        cantidadDatos = otro.cantidadDatos;
        datos = new Item*[cantidadDatos];
        for (size_t i = 0; i < cantidadDatos; ++i) {
            datos[i] = otro.datos[i];
        }
    }
    // Devolver el propio objeto (esto permite la asignación encadenada)
    return *this;
}


// aumentar capacidad vector
void Vector::aumentarCapacidadVector() {
    tamanioMaximo += 1;  // Puedes elegir un factor de crecimiento apropiado.
    Item** nuevoArrayDatos = new Item*[tamanioMaximo];
    
    // Copia los datos anteriores al nuevo arreglo.
    for (size_t i = 0; i < cantidadDatos; i++) {
        nuevoArrayDatos[i] = datos[i];
    }
    
    // Libera la memoria del antiguo arreglo.
    delete[] datos;
    
    // Asigna el nuevo arreglo a datos.
    datos = nuevoArrayDatos;
    }


// alta
void Vector::alta(Item* dato) {
    if (cantidadDatos == tamanioMaximo) {
        aumentarCapacidadVector();
    }
    
    // Agrega el nuevo dato al final del vector.
    datos[cantidadDatos] = dato;
    cantidadDatos++;
}


// SOBRECARGA de alta
void Vector::alta(Item* dato, size_t indice) {
    if (indice <= cantidadDatos) {
        if (cantidadDatos == tamanioMaximo) {
            aumentarCapacidadVector();
        }
        for (size_t i = cantidadDatos; i > indice; i--) {
            datos[i] = datos[i - 1];
        }
        datos[indice] = dato;
        cantidadDatos++;
    }
    else {
        throw VectorException();
    }
}


// disminuir capacidad vector
void Vector::disminuirCapacidadVector() {
    tamanioMaximo -= 1;  // Puedes elegir un factor de crecimiento apropiado.
    Item** nuevoArrayDatos = new Item*[tamanioMaximo];
    
    // Copia los datos anteriores al nuevo arreglo.
    for (size_t i = 0; i < cantidadDatos; i++) {
        nuevoArrayDatos[i] = datos[i];
    }
    
    // Libera la memoria del antiguo arreglo.
    delete[] datos;
    
    // Asigna el nuevo arreglo a datos.
    datos = nuevoArrayDatos;
}


// baja
Item* Vector::baja() {
    if (!vacio()) {
        Item* itemEliminado = datos[cantidadDatos - 1];
        datos[cantidadDatos - 1] = nullptr;
        cantidadDatos--;
        disminuirCapacidadVector();
        return itemEliminado;
    }

    else {
        throw VectorException();
    }    
}


// SOBRECARGA de baja
Item* Vector::baja(size_t indice) {
    if (!vacio() && indice < cantidadDatos) {
        Item* itemEliminado = datos[indice];
        for (size_t i = indice + 1; i < cantidadDatos; i++) {
            datos[i - 1] = datos[i];
        }
        datos[cantidadDatos - 1] = nullptr;
        disminuirCapacidadVector();
        cantidadDatos--;
        return itemEliminado;
    }
    else {
        throw VectorException();
    }
}


// vacio
bool Vector::vacio() {
    return cantidadDatos == 0;
}


// tamanio
size_t Vector::tamanio() {
    return cantidadDatos;
}


// SOBRECARGA operator [] para acceder a elementos del vector por indice
Item*& Vector::operator[](size_t indice) {
    if (!vacio() && indice < cantidadDatos) {
        return datos[indice];
    }
    else {
        throw VectorException();
    }
}


// Destructor
Vector::~Vector() {
    delete[] datos;
}