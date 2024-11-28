/*
 * Proyecto Veterinaria
 * Mauricio Salazar Nieto
 * 28/11/2024
 */

/*
 * La clase Gato representa un tipo de mascota y hereda 
 de la clase base Mascotas.
 * Contiene atributos específicos como tamaño, edad y raza.
 */

#ifndef GATO_H
#define GATO_H

#include "Mascotas.h" 
#include <string>   
using namespace std;

// Definición de la clase Gato
class Gato : public Mascotas {
private:
 //Declara las variables de instancia
    string tamano; 
    int edad;     
    string raza; 

public:
    // Constructores
    Gato(); // Constructor por defecto
    Gato(string nombre, string tipo, string tam, 
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
Gato::Gato() : Mascotas() {
    tamano = "";
    edad = 0;
    raza = "";
}

// Implementación del constructor parametrizado
Gato::Gato(string nombre, string tipo, string tam, int ed, string rz) : 
Mascotas(nombre, tipo) {
    tamano = tam;
    edad = ed;
    raza = rz;
}

// Métodos getters
string Gato::get_tamano() {
    return tamano;
}

int Gato::get_edad() {
    return edad;
}

string Gato::get_raza() {
    return raza;
}

// Métodos setters
void Gato::set_tamano(string tam) {
    tamano = tam;
}

void Gato::set_edad(int ed) {
    edad = ed;
}

void Gato::set_raza(string rz) {
    raza = rz;
}

#endif
