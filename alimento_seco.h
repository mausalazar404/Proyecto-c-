#include "Alimentos.h"
#include <string>
#ifndef ALIMENTO_SECO_H
#define ALIMENTO_SECO_H

using namespace std;

class Alimento_seco : public Alimentos {
    private:
        string sabor;
        string marca;
        int edad;
        string dureza;

    public:
        Alimento_seco();
        
        Alimento_seco(string tip, string tam, string sab, string mar, int ed, string dur)
            : Alimentos(tip, tam) {
            sabor = sab;
            marca = mar;
            edad = ed;
            dureza = dur;
        }


        string get_sabor();
        string get_marca();
        int get_edad();
        string get_dureza();


        void set_sabor(string);
        void set_marca(string);
        void set_edad(int);
        void set_dureza(string);
};


Alimento_seco::Alimento_seco() : Alimentos() {
    sabor = "";
    marca = "";
    edad = 0;
    dureza = "";
}

string Alimento_seco::get_sabor() {
    return sabor;
}

string Alimento_seco::get_marca() {
    return marca;
}

int Alimento_seco::get_edad() {
    return edad;
}

string Alimento_seco::get_dureza() {
    return dureza;
}

void Alimento_seco::set_sabor(string sab) {
    sabor = sab;
}

void Alimento_seco::set_marca(string mar) {
    marca = mar;
}

void Alimento_seco::set_edad(int ed) {
    edad = ed;
}

void Alimento_seco::set_dureza(string dur) {
    dureza = dur;
}

#endif
