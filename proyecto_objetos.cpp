#include "Proyecto_objetos.h"
#include <iostream>
#include <string>

int main(){
    Producto producto1("Cepillo",20,30,"higiene");
    std::cout << "\n";
    std::cout << "El nombre del producto es: " << producto1.get_nombre() << std::endl;
    std::cout << "El precio del producto es: " << producto1.get_precio() << std::endl;
    std::cout << "La cantidad del producto en stock es: " << producto1.get_stock() << std::endl;
    std::cout << "La categoria del producto es: " << producto1.get_categoria() << std::endl;

    Producto producto2("Cepillo",20,30,"higiene");
    std::cout << "\n";
    std::cout << "El nombre del producto es: " << producto2.get_nombre() << std::endl;
    std::cout << "El precio del producto es: " << producto2.get_precio() << std::endl;
    std::cout << "La cantidad del producto en stock es: " << producto2.get_stock() << std::endl;
    std::cout << "La categoria del producto es: " << producto2.get_categoria() << std::endl;

    Producto producto3("Cepillo",20,30,"higiene");
    std::cout << "\n";
    std::cout << "El nombre del producto es: " << producto3.get_nombre() << std::endl;
    std::cout << "El precio del producto es: " << producto3.get_precio() << std::endl;
    std::cout << "La cantidad del producto en stock es: " << producto3.get_stock() << std::endl;
    std::cout << "La categoria del producto es: " << producto3.get_categoria() << std::endl;

    Alimentos alimento1;
    alimento1.set_tipo_animal("Perro");
    alimento1.set_tamano_paquete("Grande");
    std::cout << "\n";
    std::cout << "Este alimento es para: " << alimento1.get_tipo_animal() << std::endl;
    std::cout << "El tamaño del paquete es: " << alimento1.get_tamano_paquete() << std::endl;

    Alimentos alimento2;
    alimento2.set_tipo_animal("Gato");
    alimento2.set_tamano_paquete("Pequeño");
    std::cout << "\n";
    std::cout << "Este alimento es para: " << alimento2.get_tipo_animal() << std::endl;
    std::cout << "El tamaño del paquete es: " << alimento2.get_tamano_paquete() << std::endl;

    Alimentos alimento3;
    alimento3.set_tipo_animal("Ave");
    alimento3.set_tamano_paquete("Mediano");
    std::cout << "\n";
    std::cout << "Este alimento es para: " << alimento3.get_tipo_animal() << std::endl;
    std::cout << "El tamaño del paquete es: " << alimento3.get_tamano_paquete() << std::endl;

    Mascotas mascota1("Max","Perro");
    std::cout << "\n";
    std::cout << "El nombre de la mascota es: " << mascota1.get_nombre() << std::endl;
    std::cout << "El tipo de mascota es: " << mascota1.get_tipo_mascota() << std::endl;

    Mascotas mascota2("Pelusa","Gato");
    std::cout << "\n";
    std::cout << "El nombre de la mascota es: " << mascota2.get_nombre() << std::endl;
    std::cout << "El tipo de mascota es: " << mascota2.get_tipo_mascota() << std::endl;


    Mascotas mascota3("Lola","Vaca");
    std::cout << "\n";
    std::cout << "El nombre de la mascota es: " << mascota3.get_nombre() << std::endl;
    std::cout << "El tipo de mascota es: " << mascota3.get_tipo_mascota() << std::endl;

    return 0;
}
