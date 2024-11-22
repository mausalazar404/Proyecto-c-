#include <string>
#ifndef MASCOTAS_H
#define MASCOTAS_H

class Mascotas{

private:
    std::string nombre;
    std::string tipo_mascota;


public:
    Mascotas();
    Mascotas(std::string nom, std::string tipm){
        nombre = nom;
        tipo_mascota = tipm;
    }

    std::string get_nombre();
    std::string get_tipo_mascota();

    void set_nombre(std::string);
    void set_tipo_mascota(std::string);
};

Mascotas::Mascotas(){
    nombre = "";
    tipo_mascota = "";
}

std::string Mascotas::get_nombre(){
    return nombre;
}

std::string Mascotas::get_tipo_mascota(){
    return tipo_mascota;
}

void Mascotas::set_nombre(std::string nom){
    nombre = nom;
}

void Mascotas::set_tipo_mascota(std::string tip){
    tipo_mascota = tip;
}

#endif