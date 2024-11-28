/*
 * Proyecto Veterinaria
 * Mauricio Salazar Nieto
 * 28/11/2024
 */

/*
 * La clase Alimento_humedo es una especialización de Alimentos.
 * Define atributos específicos como sabor, marca y edad,
 * que son características propias de este tipo de alimento.
 */

#include "Alimentos.h" 
#include <string>     
#ifndef ALIMENTO_HUMEDO_H
#define ALIMENTO_HUMEDO_H

using namespace std;

// Definición de la clase Alimento_humedo
class Alimento_humedo : public Alimentos {
private:
 //Declara las variables de instancia
    string sabor; 
    string marca;
    int edad;     

public:
    // Constructores
    Alimento_humedo(); // Constructor por defecto
    Alimento_humedo(string tip, string tam, string sab, 
    string mar, int ed); // Constructor parametrizado

    // Métodos getters
    string get_sabor();
    string get_marca();
    int get_edad();

    // Métodos setters
    void set_sabor(string);
    void set_marca(string);
    void set_edad(int);
};

// Implementación del constructor por defecto
Alimento_humedo::Alimento_humedo() : Alimentos() {
    sabor = "";
    marca = "";
    edad = 0;
}

// Implementación del constructor parametrizado
Alimento_humedo::Alimento_humedo(string tip, string tam, 
string sab, string mar, int ed)
    : Alimentos(tip, tam) {
    sabor = sab;
    marca = mar;
    edad = ed;
}

// Métodos getters
string Alimento_humedo::get_sabor() {
    return sabor;
}

string Alimento_humedo::get_marca() {
    return marca;
}

int Alimento_humedo::get_edad() {
    return edad;
}

// Métodos setters
void Alimento_humedo::set_sabor(string sab) {
    sabor = sab;
}

void Alimento_humedo::set_marca(string mar) {
    marca = mar;
}

void Alimento_humedo::set_edad(int ed) {
    edad = ed;
}

#endif
