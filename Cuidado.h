#ifndef CUIDADO_H
#define CUIDADO_H

#include "mascotas.h"
#include <string>
using namespace std;

class Cuidado {
private:
    Mascotas mascota; 
    string baño;
    string desparasitantes;
    string pedicure;

public:

    Cuidado();
    Cuidado(Mascotas m, string b, string d, string p);

    Mascotas get_mascota();
    string get_baño();
    string get_desparasitantes();
    string get_pedicure();

    void set_mascota(Mascotas m);
    void set_baño(string b);
    void set_desparasitantes(string d);
    void set_pedicure(string p);
};

Cuidado::Cuidado() {
    baño = "";
    desparasitantes = "";
    pedicure = "";
}

Cuidado::Cuidado(Mascotas m, string b, string d, string p) {
    mascota = m;
    baño = b;
    desparasitantes = d;
    pedicure = p;
}

Mascotas Cuidado::get_mascota() {
    return mascota;
}

string Cuidado::get_baño() {
    return baño;
}

string Cuidado::get_desparasitantes() {
    return desparasitantes;
}

string Cuidado::get_pedicure() {
    return pedicure;
}

void Cuidado::set_mascota(Mascotas m) {
    mascota = m;
}

void Cuidado::set_baño(string b) {
    baño = b;
}

void Cuidado::set_desparasitantes(string d) {
    desparasitantes = d;
}

void Cuidado::set_pedicure(string p) {
    pedicure = p;
}

#endif
