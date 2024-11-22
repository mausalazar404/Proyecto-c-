#include <string>
#ifndef TIENDA_H
#define TIENDA_H

class Tienda{

private:
    std::string nombre;
    std::string ubicacion;
    std::string tamano;


public:
    Tienda();
    Tienda(std::string nom, std::string ubi, std::string tam){
        nombre = nom;
        ubicacion = ubi;
        tamano = tam;
    }

    std::string get_nombre();
    std::string get_ubicacion();
    std::string get_tamano();

    void set_nombre(std::string);
    void set_ubicacion(std::string);
    void set_tamano(std::string);
};

Tienda::Tienda(){
    nombre = "";
    ubicacion = "";
    tamano = "";
}

std::string Tienda::get_nombre(){
    return nombre;
}


std::string Tienda::get_ubicacion(){
    return ubicacion;
}

std::string Tienda::get_tamano(){
    return tamano;
}

void Tienda::set_nombre(std::string nom){
    nombre = nom;
}

void Tienda::set_ubicacion(std::string ubi){
    ubicacion = ubi;
}

void Tienda::set_tamano(std::string tam){
    tamano = tam;
}

#endif
