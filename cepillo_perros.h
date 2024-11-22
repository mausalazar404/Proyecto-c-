#ifndef CEPILLO_PERROS_H
#define CEPILLO_PERROS_H

#include "productos.h"
#include <string>
using namespace std;

class Cepillo_perros : public Productos {
private:
    string material;   
    string suavidad;   

public:
   
    Cepillo_perros();
    Cepillo_perros(Tienda t, string nom, float pre, int stk, string cat, string mat, string suav);

    string get_material();
    string get_suavidad();

    void set_material(string mat);
    void set_suavidad(string suav);
};

Cepillo_perros::Cepillo_perros() : Productos() {
    material = "";
    suavidad = "";
}

Cepillo_perros::Cepillo_perros(Tienda t, string nom, float pre, int stk, string cat, string mat, string suav)
    : Productos(t, nom, pre, stk, cat) {
    material = mat;
    suavidad = suav;
}

string Cepillo_perros::get_material() {
    return material;
}

string Cepillo_perros::get_suavidad() {
    return suavidad;
}

void Cepillo_perros::set_material(string mat) {
    material = mat;
}

void Cepillo_perros::set_suavidad(string suav) {
    suavidad = suav;
}

#endif

