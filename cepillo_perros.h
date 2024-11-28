/*
 * Proyecto Veterinaria
 * Mauricio Salazar Nieto
 * 28/11/2024
 */

/*
 * La clase Cepillo_perros representa un tipo de producto específico 
 * para el cuidado de perros. Hereda de la clase Productos e incluye 
 * atributos relacionados con las características del cepillo, 
 * como su material y suavidad.
 */

#ifndef CEPILLO_PERROS_H
#define CEPILLO_PERROS_H

#include "Productos.h"
#include <string>    
using namespace std;

// Definición de la clase Cepillo_perros
class Cepillo_perros : public Productos {
private:
 //Declara las variables de instancia
    string material;  
    string suavidad;   

public:
    // Constructores
    Cepillo_perros(); // Constructor por defecto
    Cepillo_perros(string nom, float pre, int stk, string cat, 
                   string mat, string suav); // Constructor parametrizado

    // Métodos getters
    string get_material();
    string get_suavidad();

    // Métodos setters
    void set_material(string mat);
    void set_suavidad(string suav);
};

// Implementación del constructor por defecto
Cepillo_perros::Cepillo_perros() : Productos() {
    material = "";
    suavidad = "";
}

// Implementación del constructor parametrizado
Cepillo_perros::Cepillo_perros(string nom, float pre, int stk, 
                               string cat, string mat, string suav)
    : Productos(nom, pre, stk, cat) {
    material = mat;
    suavidad = suav;
}

// Métodos getters
string Cepillo_perros::get_material() {
    return material;
}

string Cepillo_perros::get_suavidad() {
    return suavidad;
}

// Métodos setters
void Cepillo_perros::set_material(string mat) {
    material = mat;
}

void Cepillo_perros::set_suavidad(string suav) {
    suavidad = suav;
}

#endif
