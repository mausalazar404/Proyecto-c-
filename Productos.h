/*
 * Proyecto Veterinaria
 * Mauricio Salazar Nieto
 * 28/11/2024
 */

/*
 * La clase Productos define las propiedades básicas de un producto. 
 * Incluye atributos como nombre, precio, stock y categoría.
 * Es la clase base para productos específicos como Cepillo_perros 
 * y Cama_perros.
 */

#ifndef PRODUCTOS_H
#define PRODUCTOS_H

#include <string> 
using namespace std;

// Definición de la clase Productos
class Productos {
private:
    string nombre;      
    float precio;      
    int stock;         
    string categoria;   

public:
    // Constructores
    Productos(); // Constructor por defecto
    // Constructor parametrizado
    Productos(string nom, float pre, int stk, string cat);

    // Métodos getters
    string get_nombre();
    float get_precio();
    int get_stock();
    string get_categoria();

    // Métodos setters
    void set_nombre(string nom);
    void set_precio(float pre);
    void set_stock(int stk);
    void set_categoria(string cat);
};

// Implementación del constructor por defecto
Productos::Productos() {
    nombre = "";
    precio = 0.0;
    stock = 0;
    categoria = "";
}

// Implementación del constructor parametrizado
Productos::Productos(string nom, float pre, int stk, string cat) {
    nombre = nom;
    precio = pre;
    stock = stk;
    categoria = cat;
}

// Métodos getters
string Productos::get_nombre() {
    return nombre;
}

float Productos::get_precio() {
    return precio;
}

int Productos::get_stock() {
    return stock;
}

string Productos::get_categoria() {
    return categoria;
}

// Métodos setters
void Productos::set_nombre(string nom) {
    nombre = nom;
}

void Productos::set_precio(float pre) {
    precio = pre;
}

void Productos::set_stock(int stk) {
    stock = stk;
}

void Productos::set_categoria(string cat) {
    categoria = cat;
}

#endif
