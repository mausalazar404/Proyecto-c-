/*
 * Proyecto Veterinaria
 * Mauricio Salazar Nieto
 * 28/11/2024
 */

/*
 * Clase Mascotas contiene los métodos para cambiar y llamar los datos.
 * Tiene dos clases hijas que representan tipos específicos de mascotas:
 * Perro y Gato.
 * Además, maneja una relación con la clase Cuidado, que define 
 * cuidados asociados a las mascotas.
 */


#include <string>       
#include "Cuidado.h"    
#ifndef MASCOTAS_H    
#define MASCOTAS_H

// Definición de la clase Mascotas
class Mascotas {

private:
 //Declara las variables de instancia
    std::string nombre;           
    std::string tipo_mascota;     
    Cuidado cuidado;              

public:
    // Constructores
    // Constructor por defecto, inicializa los atributos vacíos
    Mascotas(); 
    // Constructor que inicializa el nombre y tipo de mascota
    Mascotas(std::string nom, std::string tip); 
    // Constructor que inicializa todos los atributos
    Mascotas(Cuidado cu, std::string nom, std::string tipm);

    // Métodos getters
    Cuidado get_cuidado();              
    std::string get_nombre();           
    std::string get_tipo_mascota();     

    // Métodos setter
    void set_cuidado(Cuidado);        
    void set_nombre(std::string);     
    void set_tipo_mascota(std::string); 
};

// Implementación del constructor por defecto
// Inicializa el nombre y tipo de mascota con valores vacíos
Mascotas::Mascotas() {
    nombre = "";
    tipo_mascota = "";
}

// Implementación del constructor 
Mascotas::Mascotas(std::string nom, std::string tip) {
    nombre = nom;
    tipo_mascota = tip;
}

// Implementación del constructor 
Mascotas::Mascotas(Cuidado cu, std::string nom, std::string tipm) {
    cuidado = cu;
    nombre = nom;
    tipo_mascota = tipm;
}

// Métodos getter
Cuidado Mascotas::get_cuidado() {
    return cuidado;
}

std::string Mascotas::get_nombre() {
    return nombre;
}

std::string Mascotas::get_tipo_mascota() {
    return tipo_mascota; 
}

// Métodos setter
void Mascotas::set_cuidado(Cuidado cu) {
    cuidado = cu; 
}  

void Mascotas::set_nombre(std::string nom) {
    nombre = nom; 
}

void Mascotas::set_tipo_mascota(std::string tip) {
    tipo_mascota = tip; 
}

#endif 
