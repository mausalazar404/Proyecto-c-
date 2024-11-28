/*
 * Proyecto Veterinaria
 * Mauricio Salazar Nieto
 * 28/11/2024
 */

/*
 * La clase Perro representa un tipo de mascota y hereda de la 
 clase base Mascotas.
 * Contiene atributos adicionales como tamaño, edad y raza.
 */

#ifndef PERRO_H
#define PERRO_H

#include "Mascotas.h" 
#include <string>    
using namespace std;

// Definición de la clase Perro
class Perro : public Mascotas {
private:
 //Declara las variables de instancia
    string tamano; 
    int edad;     
    string raza;   

public:
    // Constructores
    Perro(); // Constructor por defecto
    Perro(string nombre, string tipo, string tam, 
    int ed, string rz); // Constructor parametrizado

    // Métodos getters
    string get_tamano();
    int get_edad();
    string get_raza();

    // Métodos setters
    void set_tamano(string tam);
    void set_edad(int ed);
    void set_raza(string rz);
};

// Implementación del constructor por defecto
Perro::Perro() : Mascotas() {
    tamano = "";
    edad = 0;
    raza = "";
}

// Implementación del constructor parametrizado
Perro::Perro(string nombre, string tipo, string tam, int ed, string rz) : 
Mascotas(nombre, tipo) {
    tamano = tam;
    edad = ed;
    raza = rz;
}

// Métodos getters
string Perro::get_tamano() {
    return tamano;
}

int Perro::get_edad() {
    return edad;
}

string Perro::get_raza() {
    return raza;
}

// Métodos setters
void Perro::set_tamano(string tam) {
    tamano = tam;
}

void Perro::set_edad(int ed) {
    edad = ed;
}

void Perro::set_raza(string rz) {
    raza = rz;
}

#endif
