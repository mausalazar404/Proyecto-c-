/*
 * Proyecto Veterinaria
 * Mauricio Salazar Nieto
 * 28/11/2024
 */

/*
 * La clase Alimento_seco representa un tipo de alimento para mascotas
 * que hereda de la clase base Alimentos. Incluye atributos específicos
 * como sabor, marca, edad recomendada y dureza.
 */

#include "Alimentos.h" 
#include <string>     
#ifndef ALIMENTO_SECO_H
#define ALIMENTO_SECO_H

using namespace std;

// Definición de la clase Alimento_seco
class Alimento_seco : public Alimentos {
private:
 //Declara las variables de instancia
    string sabor;   
    string marca; 
    int edad;       
    string dureza; 

public:
    // Constructores
    Alimento_seco(); // Constructor por defecto

    // Constructor parametrizado
    Alimento_seco(string tip, string tam, string sab, 
        string mar, int ed, string dur)
        : Alimentos(tip, tam) { // Llama al constructor de la clase base
        sabor = sab;
        marca = mar;
        edad = ed;
        dureza = dur;
    }

    // Métodos getters
    string get_sabor();
    string get_marca();
    int get_edad();
    string get_dureza();

    // Métodos setters
    void set_sabor(string);
    void set_marca(string);
    void set_edad(int);
    void set_dureza(string);
};

// Implementación del constructor por defecto
Alimento_seco::Alimento_seco() : Alimentos() {
    sabor = "";
    marca = "";
    edad = 0;
    dureza = "";
}

// Métodos getters
string Alimento_seco::get_sabor() {
    return sabor;
}

string Alimento_seco::get_marca() {
    return marca;
}

int Alimento_seco::get_edad() {
    return edad;
}

string Alimento_seco::get_dureza() {
    return dureza;
}

// Métodos setters
void Alimento_seco::set_sabor(string sab) {
    sabor = sab;
}

void Alimento_seco::set_marca(string mar) {
    marca = mar;
}

void Alimento_seco::set_edad(int ed) {
    edad = ed;
}

void Alimento_seco::set_dureza(string dur) {
    dureza = dur;
}

#endif
