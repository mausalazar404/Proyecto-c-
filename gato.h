#ifndef GATO_H
#define GATO_H

#include "Mascotas.h"
#include <string>
using namespace std;

class Gato : public Mascotas {
private:
    string tamano;
    int edad;
    string raza;

public:
    Gato();
    Gato(string nombre, string tipo, string tam, int ed, string rz);

    string get_tamano();
    int get_edad();
    string get_raza();

    void set_tamano(string tam);
    void set_edad(int ed);
    void set_raza(string rz);
};

Gato::Gato() : Mascotas() {
    tamano = "";
    edad = 0;
    raza = "";
}

Gato::Gato(string nombre, string tipo, string tam, int ed, string rz) : Mascotas(nombre, tipo) {
    tamano = tam;
    edad = ed;
    raza = rz;
}

string Gato::get_tamano() {
    return tamano;
}

int Gato::get_edad() {
    return edad;
}

string Gato::get_raza() {
    return raza;
}

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
