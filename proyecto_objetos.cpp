#include "cepillo_perros.h"
#include "camas.h"
#include "alimento_humedo.h"
#include "alimento_seco.h"
#include "Cuidado.h"
#include "perro.h"
#include "gato.h"
#include <iostream>
#include <string>


int main(){
    Tienda tienda1("Patitas Felices", "Avenida de las Flores", "Grande");
    Cepillo_perros cepillo1(tienda1, "Cepillo Suave", 350, 10, "Cuidado Personal", "Plástico", "Suave");
    cout << "Cepillo para Perros:" << endl;
    cout << "Nombre del producto: " << cepillo1.get_nombre() << endl;
    cout << "Precio: $" << cepillo1.get_precio() << endl;
    cout << "Stock: " << cepillo1.get_stock() << " unidades" << endl;
    cout << "Categoría: " << cepillo1.get_categoria() << endl;
    cout << "Material: " << cepillo1.get_material() << endl;
    cout << "Suavidad: " << cepillo1.get_suavidad() << endl;
    cout << "Disponible en la tienda: " << cepillo1.get_tienda().get_nombre() << endl;
    std::cout<<"\n";

    Tienda tienda2("Patitas Felices", "Avenida de las Flores", "Grande");
    Cama_perros cama1(tienda2, "Cama Deluxe", 899, 5, "Descanso", "Algodón", "Suave", "Grande");
    cout << "Cama para Perros:" << endl;
    cout << "Nombre del producto: " << cama1.get_nombre() << endl;
    cout << "Precio: $" << cama1.get_precio() << endl;
    cout << "Stock: " << cama1.get_stock() << " unidades" << endl;
    cout << "Categoría: " << cama1.get_categoria() << endl;
    cout << "Material: " << cama1.get_material() << endl;
    cout << "Suavidad: " << cama1.get_suavidad() << endl;
    cout << "Tamaño: " << cama1.get_tamano() << endl;
    cout << "Disponible en la tienda: " << cama1.get_tienda().get_nombre() << endl;

    Alimento_humedo alimento1("Gatos", "Pequeño", "Salmón", "Whiskas", 2);
    std::cout<<"Alimento humedo:"<<endl;
    std::cout << "Tipo de animal: " << alimento1.get_tipo_animal() << std::endl;
    std::cout << "Tamaño del paquete: " << alimento1.get_tamano_paquete() << std::endl;
    std::cout << "Sabor: " << alimento1.get_sabor() << std::endl;
    std::cout << "Marca: " << alimento1.get_marca() << std::endl;
    std::cout << "Edad recomendada: " << alimento1.get_edad() << " años" << std::endl;
    std::cout<<"\n";

    Alimento_seco alimento2("Perros", "Grande", "Pollo", "Pedigree", 3, "Dura");
    cout << "Alimento seco:" << endl;
    cout << "Tipo de animal: " << alimento2.get_tipo_animal() << endl;
    cout << "Tamaño del paquete: " << alimento2.get_tamano_paquete() << endl;
    cout << "Sabor: " << alimento2.get_sabor() << endl;
    cout << "Marca: " << alimento2.get_marca() << endl;
    cout << "Edad recomendada: " << alimento2.get_edad() << " años" << endl;
    cout << "Dureza: " << alimento2.get_dureza() << endl;
    std::cout<<"\n";

    Mascotas mascota1("Max", "Perro");
    Cuidado cuidado1(mascota1, "Mensual", "Semestral", "Trimestral");
    cout << "Cuidado de la mascota:" << endl;
    cout << "Nombre: " << cuidado1.get_mascota().get_nombre() << endl;
    cout << "Tipo de mascota: " << cuidado1.get_mascota().get_tipo_mascota() << endl;
    cout << "Frecuencia de baño: " << cuidado1.get_baño() << endl;
    cout << "Frecuencia de desparasitantes: " << cuidado1.get_desparasitantes() << endl;
    cout << "Frecuencia de pedicure: " << cuidado1.get_pedicure() << endl;

    Perro perro1("Max", "Perro", "Grande", 5, "Labrador");
    cout << "Información del perro:" << endl;
    cout << "Nombre: " << perro1.get_nombre() << endl;
    cout << "Tipo: " << perro1.get_tipo_mascota() << endl;
    cout << "Tamaño: " << perro1.get_tamano() << endl;
    cout << "Edad: " << perro1.get_edad() << " años" << endl;
    cout << "Raza: " << perro1.get_raza() << endl;
    std::cout<<"\n";

    Gato gato1("Pelusa", "Gato", "Mediano", 3, "Persa");
    cout << "Información del gato:" << endl;
    cout << "Nombre: " << gato1.get_nombre() << endl;
    cout << "Tipo: " << gato1.get_tipo_mascota() << endl;
    cout << "Tamaño: " << gato1.get_tamano() << endl;
    cout << "Edad: " << gato1.get_edad() << " años" << endl;
    cout << "Raza: " << gato1.get_raza() << endl;

    return 0;
}
