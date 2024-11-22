#ifndef PERRO_H
#define PERRO_H

#include "Mascotas.h"
#include <string>
using namespace std;

class Perro : public Mascotas {
private:
    string tamano;
    int edad;
    string raza;

public:

    Perro();
    Perro(string nombre, string tipo, string tam, int ed, string rz);

    string get_tamano();
    int get_edad();
    string get_raza();

    void set_tamano(string tam);
    void set_edad(int ed);
    void set_raza(string rz);
};

Perro::Perro() : Mascotas() {
    tamano = "";
    edad = 0;
    raza = "";
}

Perro::Perro(string nombre, string tipo, string tam, int ed, string rz) : Mascotas(nombre, tipo) {
    tamano = tam;
    edad = ed;
    raza = rz;
}

string Perro::get_tamano() {
    return tamano;
}

int Perro::get_edad() {
    return edad;
}

string Perro::get_raza() {
    return raza;
}

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
