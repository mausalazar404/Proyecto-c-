/*
 * Proyecto Veterinaria
 * Mauricio Salazar Nieto
 * 28/11/2024
 */

/*
 * La clase Cama_perros es una especialización de Productos.
 * Define atributos específicos como material, suavidad y tamaño,
 * que son características propias de las camas para perros.
 */

#ifndef CAMAS_H
#define CAMAS_H

#include "Productos.h"
#include <string>     
using namespace std;

// Definición de la clase Cama_perros
class Cama_perros : public Productos {
private:
 //Declara las variables de instancia
    string material; 
    string suavidad;   
    string tamano;     

public:
    // Constructores
    Cama_perros(); // Constructor por defecto
    Cama_perros(string nom, float pre, int stk, string cat, 
    string mat, string suav, string tam); // Constructor parametrizado

    // Métodos getters
    string get_material();
    string get_suavidad();
    string get_tamano();

    // Métodos setters
    void set_material(string mat);
    void set_suavidad(string suav);
    void set_tamano(string tam);
};

// Implementación del constructor por defecto
Cama_perros::Cama_perros() : Productos() {
    material = "";
    suavidad = "";
    tamano = "";
}

// Implementación del constructor parametrizado
Cama_perros::Cama_perros(string nom, float pre, int stk, 
string cat, string mat, string suav, string tam)
    : Productos(nom, pre, stk, cat) {
    material = mat;
    suavidad = suav;
    tamano = tam;
}

// Métodos getters
string Cama_perros::get_material() {
    return material;
}

string Cama_perros::get_suavidad() {
    return suavidad;
}

string Cama_perros::get_tamano() {
    return tamano;
}

// Métodos setters
void Cama_perros::set_material(string mat) {
    material = mat;
}

void Cama_perros::set_suavidad(string suav) {
    suavidad = suav;
}

void Cama_perros::set_tamano(string tam) {
    tamano = tam;
}

#endif
