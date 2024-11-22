#ifndef PRODUCTOS_H
#define PRODUCTOS_H

#include "Tienda.h"
#include <string>
using namespace std;

class Productos {
private:
    Tienda tienda;          
    string nombre;         
    float precio;         
    int stock;            
    string categoria;    

public:
    
    Productos();
    Productos(Tienda t, string nom, float pre, int stk, string cat);

   
    Tienda get_tienda();
    string get_nombre();
    float get_precio();
    int get_stock();
    string get_categoria();

    void set_tienda(Tienda t);
    void set_nombre(string nom);
    void set_precio(float pre);
    void set_stock(int stk);
    void set_categoria(string cat);
};

Productos::Productos() {
    nombre = "";
    precio = 0.0;
    stock = 0;
    categoria = "";
}

Productos::Productos(Tienda t, string nom, float pre, int stk, string cat) {
    tienda = t;
    nombre = nom;
    precio = pre;
    stock = stk;
    categoria = cat;
}

Tienda Productos::get_tienda() {
    return tienda;
}

string Productos::get_nombre() {
    return nombre;
}

float Productos::get_precio() {
    return precio;
}

int Productos::get_stock() {
    return stock;
}

string Productos::get_categoria() {
    return categoria;
}

void Productos::set_tienda(Tienda t) {
    tienda = t;
}

void Productos::set_nombre(string nom) {
    nombre = nom;
}

void Productos::set_precio(float pre) {
    precio = pre;
}

void Productos::set_stock(int stk) {
    stock = stk;
}

void Productos::set_categoria(string cat) {
    categoria = cat;
}

#endif
