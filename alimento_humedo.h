#include "Alimentos.h"
#include <string>
#ifndef ALIMENTO_HUMEDO_H
#define ALIMENTO_HUMEDO_H

using namespace std;

class Alimento_humedo: public Alimentos{
    private:
        string sabor;
        string marca;
        int edad;

    public:
        Alimento_humedo();
        Alimento_humedo(string tip, string tam, string sab, string mar, int ed)
        : Alimentos(tip, tam) {
        sabor = sab;
        marca = mar;
        edad = ed;
    }

        string get_sabor();
        string get_marca();
        int get_edad();

        void set_sabor(string);
        void set_marca(string);
        void set_edad(int);
        
};

Alimento_humedo::Alimento_humedo():Alimentos(){
    sabor = "";
    marca = "";
    edad = 0;
}

string Alimento_humedo::get_sabor(){
    return sabor;
}

string Alimento_humedo::get_marca(){
    return marca;
}

int Alimento_humedo::get_edad(){
    return edad;
}

void Alimento_humedo::set_sabor(string sab){
    sabor = sab;
}

void Alimento_humedo::set_marca(string mar){
    marca = mar;
}

void Alimento_humedo::set_edad(int ed){
    edad = ed;
}


#endif