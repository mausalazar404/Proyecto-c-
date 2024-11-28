/*
 * Proyecto Veterinaria
 * Mauricio Salazar Nieto
 * 28/11/2024
 */

/*
 * Clase Alimentos contiene los métodos para cambiar y llamar los datos
 * Tiene 2 clases hijas que son dos tipos de productos:
 * Alimento_humedo y Alimento_seco
 *
 */

#include <string>
#ifndef ALIMENTOS_H
#define ALIMENTOS_H

// Clase base Alimentos
class Alimentos{
private:
 //Declara las variables de instancia
    std::string tipo_animal;
    std::string tamano_paquete;

public:
    // Constructores
    Alimentos();
    Alimentos(std::string tip,std::string tam){
        tipo_animal = tip;
        tamano_paquete = tam;
    }

    // Métodos getter
    std::string get_tipo_animal();
    std::string get_tamano_paquete();

    // Métodos setter
    void set_tipo_animal(std::string);
    void set_tamano_paquete(std::string);
};

// Implementación del constructor por defecto
// Inicializa los atributos con valores vacíos
Alimentos::Alimentos(){
    tipo_animal = "";
    tamano_paquete = "";
}

//Métodos getter
std::string Alimentos::get_tipo_animal(){
    return tipo_animal;
}

std::string Alimentos::get_tamano_paquete(){
    return tamano_paquete;
}

//Métodos setter
void Alimentos::set_tipo_animal(std::string tip){
    tipo_animal = tip;
}

void Alimentos::set_tamano_paquete(std::string tam){
    tamano_paquete = tam;
}

#endif
