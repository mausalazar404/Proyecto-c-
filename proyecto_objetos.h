#include <string>

class Producto{

private:
    std::string nombre;
    float precio;
    int stock;
    std::string categoria;


public:
    Producto();
    Producto(std::string nom, float pre, int sto, std::string cat): nombre(nom),precio(pre),stock(sto),categoria(cat){};

    std::string get_nombre();
    float get_precio();
    int get_stock();
    std::string get_categoria();

    void set_nombre(std::string);
    void set_precio(float);
    void set_stock(int);
    void set_categoria(std::string);

};

Producto::Producto(){
    nombre = "";
    precio = 0.0;
    stock = 0;
    categoria = "";
}

std::string Producto::get_nombre(){
    return nombre;
}

float Producto::get_precio(){
    return precio;
}

int Producto::get_stock(){
    return stock;
}

std::string Producto::get_categoria(){
    return categoria;
}

void Producto::set_nombre(std::string nom){
    nombre = nom;
}

void Producto::set_precio(float pre){
    precio = pre;
}

void Producto::set_stock(int sto){
    stock = sto;
}

void Producto::set_categoria(std::string cat){
    categoria = cat;
}


class Alimentos{

private:
    std::string tipo_animal;
    std::string tamano_paquete;

public:
    Alimentos();
    Alimentos(std::string tip,std::string tam): tipo_animal(tip),tamano_paquete(tam){};

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


class Mascotas{

private:
    std::string nombre;
    std::string tipo_mascota;


public:
    Mascotas();
    Mascotas(std::string nom, std::string tipm): nombre(nom),tipo_mascota(tipm){};

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
