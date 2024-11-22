#include <string>
#ifndef ALIMENTOS_H
#define ALIMENTOS_H

class Alimentos{

private:
    std::string tipo_animal;
    std::string tamano_paquete;

public:
    Alimentos();
    Alimentos(std::string tip,std::string tam){
        tipo_animal = tip;
        tamano_paquete = tam;
    }

    std::string get_tipo_animal();
    std::string get_tamano_paquete();

    void set_tipo_animal(std::string);
    void set_tamano_paquete(std::string);
};

Alimentos::Alimentos(){
    tipo_animal = "";
    tamano_paquete = "";
}

std::string Alimentos::get_tipo_animal(){
    return tipo_animal;
}

std::string Alimentos::get_tamano_paquete(){
    return tamano_paquete;
}

void Alimentos::set_tipo_animal(std::string tip){
    tipo_animal = tip;
}

void Alimentos::set_tamano_paquete(std::string tam){
    tamano_paquete = tam;
}

#endif