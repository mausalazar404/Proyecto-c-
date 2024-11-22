#ifndef CAMAS_H
#define CAMAS_H

#include "productos.h"
#include <string>
using namespace std;

class Cama_perros : public Productos {
private:
    string material;   
    string suavidad;   
    string tamano;     

public:
    Cama_perros();
    Cama_perros(Tienda t, string nom, float pre, int stk, string cat, string mat, string suav, string tam);

    string get_material();
    string get_suavidad();
    string get_tamano();

    void set_material(string mat);
    void set_suavidad(string suav);
    void set_tamano(string tam);
};

Cama_perros::Cama_perros() : Productos() {
    material = "";
    suavidad = "";
    tamano = "";
}

Cama_perros::Cama_perros(Tienda t, string nom, float pre, int stk, string cat, string mat, string suav, string tam)
    : Productos(t, nom, pre, stk, cat) {
    material = mat;
    suavidad = suav;
    tamano = tam;
}

string Cama_perros::get_material() {
    return material;
}

string Cama_perros::get_suavidad() {
    return suavidad;
}

string Cama_perros::get_tamano() {
    return tamano;
}

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
