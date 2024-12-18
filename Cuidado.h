/*
 * Proyecto Veterinaria
 * Mauricio Salazar Nieto
 * 28/11/2024
 */

/*
 * La clase Cuidado representa los servicios o aspectos de cuidado 
 * asociados a una mascota. Es utilizada como componente en la clase Mascotas.
 */

#ifndef CUIDADO_H
#define CUIDADO_H

#include <string> 
using namespace std;

// Definición de la clase Cuidado
class Cuidado {
private:
 //Declara las variables de instancia
    string bano;             
    string desparasitantes;  
    string pedicure;    
public:
    // Constructores
    Cuidado(); // Constructor por defecto
    Cuidado(string b, string d, string p); // Constructor parametrizado

    // Métodos getters
    string get_bano();
    string get_desparasitantes();
    string get_pedicure();

    // Métodos setters
    void set_bano(string b);
    void set_desparasitantes(string d);
    void set_pedicure(string p);
};

// Implementación del constructor por defecto
Cuidado::Cuidado() {
    bano = "";
    desparasitantes = "";
    pedicure = "";
}

// Implementación del constructor parametrizado
Cuidado::Cuidado(string b, string d, string p) {
    bano = b;
    desparasitantes = d;
    pedicure = p;
}

// Métodos getters
string Cuidado::get_bano() {
    return bano;
}

string Cuidado::get_desparasitantes() {
    return desparasitantes;
}

string Cuidado::get_pedicure() {
    return pedicure;
}

// Métodos setters
void Cuidado::set_bano(string b) {
    bano = b;
}

void Cuidado::set_desparasitantes(string d) {
    desparasitantes = d;
}

void Cuidado::set_pedicure(string p) {
    pedicure = p;
}

#endif
