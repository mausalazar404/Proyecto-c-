/*
 * Proyecto Veterinaria
 * Mauricio Salazar Nieto
 * 28/11/2024
 */

/*
 * Clase Tienda, maneja grupos de Productos, divididos en
 * Camas_perros y Cepillo_perros
 *
 */


#include <string>
#ifndef TIENDA_H
#define TIENDA_H
// Clase que maneja la información de camas para perros
#include "camas.h" 
// Clase que maneja la información de cepillos para perros
#include "cepillo_perros.h" 

// Definición de la clase Tienda
class Tienda{
private:
 //Declara las variables de instancia
    std::string nombre;
    std::string ubicacion;
    std::string tamano;
    Cepillo_perros cepillo_perros;
    Cama_perros cama_perros;

public:
 // Constructor por defecto
    Tienda();
 // Constructor con parámetros   
    Tienda(Cepillo_perros ce, Cama_perros ca, ::string nom, 
    std::string ubi, std::string tam){
        cepillo_perros = ce;
        cama_perros = ca;
        nombre = nom;
        ubicacion = ubi;
        tamano = tam;
    }

    // Métodos getter:
    Cepillo_perros get_cepillo_perros();
    Cama_perros get_cama_perros();
    std::string get_nombre();
    std::string get_ubicacion();
    std::string get_tamano();

    // Métodos setter:
    void set_cepillo_perros(Cepillo_perros);
    void set_cama_perros(Cama_perros);
    void set_nombre(std::string);
    void set_ubicacion(std::string);
    void set_tamano(std::string);
};

// Constructor por defecto
Tienda::Tienda(){
    nombre = "";
    ubicacion = "";
    tamano = "";
}

// Métodos getter
Cepillo_perros Tienda::get_cepillo_perros(){
    return cepillo_perros;
}

Cama_perros Tienda::get_cama_perros(){
    return cama_perros;
}

std::string Tienda::get_nombre(){
    return nombre;
}


std::string Tienda::get_ubicacion(){
    return ubicacion;
}

std::string Tienda::get_tamano(){
    return tamano;
}

// Métodos setter
void Tienda::set_cepillo_perros(Cepillo_perros ce){
    cepillo_perros = ce;
}

void Tienda::set_cama_perros(Cama_perros ca){
    cama_perros = ca;
}

void Tienda::set_nombre(std::string nom){
    nombre = nom;
}

void Tienda::set_ubicacion(std::string ubi){
    ubicacion = ubi;
}

void Tienda::set_tamano(std::string tam){
    tamano = tam;
}

#endif
