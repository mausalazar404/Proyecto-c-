/*
 * Proyecto Veterinaria
 * Mauricio Salazar Nieto
 * 28/11/2024
 */

/**
 * Descripcion: este es un proyecto para la clase de Pensamiento
 * Computacional Orientado a Objetos. Es un programa que recibe 
 * datos para la administración de una veterinaria.
*/

//Bibliotecas
#include "alimento_humedo.h"
#include "alimento_seco.h"
#include "Cuidado.h"
#include "perro.h"
#include "gato.h"
#include "Tienda.h"
#include <iostream>
#include <string>
using namespace std;

// Función que muestra el menú principal al usuario
void menu() {
    cout << "\n==== MENU ====" << endl;
    cout << "NO USE ESPACIOS AL MOMENTO DE INGRESAR DATOS" << endl;
    cout << "1. Agregar Productos" << endl;
    cout << "2. Agregar Alimentos" << endl;
    cout << "3. Agregar Mascotas (perro)" << endl;
    cout << "4. Agregar Mascotas (gato)" << endl;
    cout << "5. Mostrar Productos" << endl;
    cout << "6. Mostrar Alimentos" << endl;
    cout << "7. Mostrar Mascotas" << endl;
    cout << "8. Salir" << endl;
    cout << "Seleccione una opcion: ";
}

// Función para mostrar los datos del cepillo de perros
void mostrarProducto_cepillo(Tienda tienda){

    cout << "\n";
    cout << "Tienda: "<< tienda.get_nombre() << endl; 
    cout << "Direccion: " << tienda.get_ubicacion() << endl;
    cout << "Tamano: " << tienda.get_tamano() << endl;
    
    Cepillo_perros cepillo_perros = tienda.get_cepillo_perros();
    cout << "\n";
    cout << "--Cepillo perro--" << endl;
    cout << "Nombre: " << cepillo_perros.get_nombre() << endl;
    cout << "Precio: "<< cepillo_perros.get_precio() << endl;
    cout << "Stock: " << cepillo_perros.get_stock() << endl;
    cout << "Categoria: " << cepillo_perros.get_categoria() << endl;
    cout << "Material: "<< cepillo_perros.get_material() << endl; 
    cout << "Suavidad: " << cepillo_perros.get_suavidad() << endl;
}

// Función para mostrar los datos de la cama de perros
void mostrarProducto_cama(Tienda tienda){
    
    Cama_perros cama_perros = tienda.get_cama_perros();
    cout << "\n";
    cout << "--Cama perros--" << endl;
    cout << "Nombre: " << cama_perros.get_nombre() << endl;
    cout << "Precio: " << cama_perros.get_precio() << endl;
    cout << "Stock: " << cama_perros.get_stock() << endl;
    cout << "Categoria: " << cama_perros.get_categoria() << endl;
    cout << "Material: " << cama_perros.get_material() << endl; 
    cout << "Suavidad: " << cama_perros.get_suavidad() << endl;
    cout << "Tamano: " << cama_perros.get_tamano() << endl;
}

// Función para mostrar los datos del alimento húmedo
void mostrarAlimento_humedo(Alimento_humedo alimento_humedo){
    cout << "\n";
    cout << "--Alimento humedo--" << endl;
    cout << "Tipo animal: " << alimento_humedo.get_tipo_animal() << endl;
    cout << "Tipo paquete: " << alimento_humedo.get_tamano_paquete()<<endl;
    cout << "Sabor: " << alimento_humedo.get_sabor()<<endl;
    cout << "Marca: " << alimento_humedo.get_marca()<<endl;
    cout << "Edad: " << alimento_humedo.get_edad()<<endl;
}

// Función para mostrar los datos del alimento seco
void mostrarAlimento_seco(Alimento_seco alimento_seco){
    cout << "\n";
    cout << "--Alimento seco--" << endl;
    cout << "Tipo animal: " << alimento_seco.get_tipo_animal() << endl;
    cout << "Tipo paquete: " << alimento_seco.get_tamano_paquete()<<endl;
    cout << "Sabor: " << alimento_seco.get_sabor()<<endl;
    cout << "Marca: " << alimento_seco.get_marca()<<endl;
    cout << "Edad: " << alimento_seco.get_edad()<<endl;
    cout << "Dureza: " << alimento_seco.get_dureza()<<endl;
}

// Función para mostrar los datos de un perro
void mostrarPerro(Perro perro){
    
    Cuidado cuidado = perro.get_cuidado();   
    cout << "\n";
    cout << "--Perros--" << endl;
    cout << "Nombre: "<< perro.get_nombre() << endl;
    cout << "Tipo de mascota: " << perro.get_tipo_mascota() << endl;
    cout << "Tamano de la mascota: " << perro.get_tamano() << endl;
    cout << "Edad de la mascota: " << perro.get_edad() << endl;
    cout << "Raza: " << perro.get_raza() << endl;    
    cout << "Bano: " << cuidado.get_baño() << endl;  
    cout << "Desparasitantes: " << cuidado.get_desparasitantes() << endl;
    cout << "Pedicure: " << cuidado.get_pedicure() << endl;  

}

// Función para mostrar los datos de un gato
void mostrargato(Gato gato){   
    Cuidado cuidado = gato.get_cuidado();   
    cout << "\n";
    cout << "--Gato--" << endl;
    cout << "Nombre: "<< gato.get_nombre() << endl;
    cout << "Tipo de mascota: " << gato.get_tipo_mascota() << endl;
    cout << "Tamano de la mascota: " << gato.get_tamano() << endl;
    cout << "Edad de la mascota: " << gato.get_edad() << endl;
    cout << "Raza: " << gato.get_raza() << endl;    
    cout << "Bano: " << cuidado.get_baño() << endl;  
    cout << "Desparasitantes: " << cuidado.get_desparasitantes() << endl;
    cout << "Pedicure: " << cuidado.get_pedicure() << endl;  

}


// Función principal
int main(){
    Tienda tienda; // Objeto Tienda
    Alimento_seco alimento_seco; // Objeto para alimento seco
    Alimento_humedo alimento_humedo; // Objeto para alimento húmedo
    Perro perro;  // Objeto Perro
    Gato gato; // Objeto Gato
    int opcion; // Variable para la opción seleccionada

    // Ciclo principal del programa
    do{
        menu(); // Mostrar menú
        cin>> opcion; // Leer opción
        switch(opcion){
            
            // Código para agregar productos
            case 1: {
                string nombre, ubicacion, tamano, cepillo_nombre, categoria, 
                material, suavidad, cama_material, cama_nombre,
                cama_categoria, cama_suavidad, cama_tamano;
                float precio_cepillo, cama_precio;
                int stock_cepillo, cama_stock;

                cout << "Ingrese el nombre de la tienda: ";
                cin>> nombre;
                cout << "Ingrese la ubicacion de la tienda: ";
                cin >> ubicacion;
                cout << "Ingrese el tamano de la tienda: ";
                cin>> tamano;

                cout << "\n--- Datos del Cepillo para Perros ---" << endl;
                cout << "Nombre del cepillo: ";
                cin>> cepillo_nombre;
                cout << "Precio del cepillo: ";
                cin >> precio_cepillo;
                cout << "Stock del cepillo: ";
                cin >> stock_cepillo;
                cout << "Categoria del cepillo: ";
                cin>> categoria;
                cout << "Material del cepillo: ";
                cin>> material;
                cout << "Suavidad del cepillo: ";
                cin>> suavidad;

                // Crear el objeto Cepillo_perros
                Cepillo_perros cepillo(cepillo_nombre, precio_cepillo,
                stock_cepillo, categoria, material, suavidad);

                cout << "\n--- Datos de cama para Perros ---" << endl;
                cout << "Nombre de la cama: ";
                cin >> cama_nombre;
                cout << "Precio de la cama: ";
                cin >> cama_precio;
                cout << "Stock de la cama: ";
                cin >> cama_stock;
                cout << "Categoria de la cama: ";
                cin >> cama_categoria;
                cout << "Material de la cama: ";
                cin >> cama_material;
                cout << "Suavidad de la cama: ";
                cin >> cama_suavidad;
                cout << "Tamano de la cama: ";
                cin >> cama_tamano;

                // Crear el objeto cama_perros
                Cama_perros cama(cama_nombre, cama_precio, cama_stock, 
                cama_categoria, cama_material, cama_suavidad, cama_tamano);


                // Asignar valores a la tienda
                tienda.set_nombre(nombre);
                tienda.set_ubicacion(ubicacion);
                tienda.set_tamano(tamano);
                tienda.set_cepillo_perros(cepillo);
                tienda.set_cama_perros(cama);

                cout << 
                "\nDatos de la tienda y productos agregados correctamente\n";
                break;
            }
            
            // Código para agregar alimentos
            case 2:{
                string ta_h, tp_h, s_h, m_h, ta_s, tp_s, s_s, m_s, d_s ;
                int e_h, e_s;

                cout << "\n--- Datos alimento humedo ---" << endl;
                cout << "Tipo de animal: ";
                cin >> ta_h;
                cout << "Tamanio del paquete: ";
                cin >> tp_h;
                cout << "Sabor: ";
                cin >> s_h;
                cout << "Marca: ";
                cin >> m_h;
                cout << "Para que edad es: ";
                cin >> e_h;

                cout << "\n--- Datos alimento seco ---" << endl;
                cout << "Tipo de animal: ";
                cin >> ta_s;
                cout << "Tamanio del paquete: ";
                cin >> tp_s;
                cout << "Sabor: ";
                cin >> s_s;
                cout << "Marca: ";
                cin >> m_s;
                cout << "Para que edad es: ";
                cin >> e_s;
                cout << "Dureza del alimento: ";
                cin >> d_s;

                alimento_humedo.set_tipo_animal(ta_h);
                alimento_humedo.set_tamano_paquete(tp_h);
                alimento_humedo.set_sabor(s_h);
                alimento_humedo.set_marca(m_h);
                alimento_humedo.set_edad(e_h);

                alimento_seco.set_tipo_animal(ta_s);
                alimento_seco.set_tamano_paquete(tp_s);
                alimento_seco.set_sabor(s_s);
                alimento_seco.set_marca(m_s);
                alimento_seco.set_edad(e_s);
                alimento_seco.set_dureza(d_s);
                
                cout << "\nDatos de alimentos agregados correctamente\n";
                break;

            }

            // Código para agregar datos de un perro
            case 3: {
                string nom,tip,raz,ban,des,ped,tam;
                int ed;

                cout << "\n--- Datos de perro ---" << endl;
                cout << "Nombre de la mascota: " << endl;
                cin >> nom;
                cout << "Tipo de mascota: ";
                cin >> tip;
                cout << "Raza: ";
                cin >> raz;
                cout << "Tamano de mascota: ";
                cin >> tam;
                cout << "Edad: ";
                cin >> ed;
                cout << "Cuidado de la mascota" << endl;
                cout <<"Bano: ";
                cin >> ban;
                cout << "Desparasitantes: ";
                cin >> des;
                cout << "Pedicure: ";
                cin >> ped;

                perro.set_nombre(nom);
                perro.set_tipo_mascota(tip);
                perro.set_raza(raz);
                perro.set_tamano(tam);
                perro.set_edad(ed);
                
                Cuidado cuidado(ban,des,ped);
                perro.set_cuidado(cuidado);
                

                cout << "\nDatos de mascotas agregados correctamente\n";
                break;

            }

            // Código para agregar datos de un gato
            case 4:{
                string nom,tip,raz,ban,des,ped,tam;
                int ed;

                cout << "\n--- Datos de gato ---" << endl;
                cout << "Nombre de la mascota: " << endl;
                cin >> nom;
                cout << "Tipo de mascota: ";
                cin >> tip;
                cout << "Raza: ";
                cin >> raz;
                cout << "Tamano de mascota: ";
                cin >> tam;
                cout << "Edad: ";
                cin >> ed;
                cout << "Cuidado de la mascota" << endl;
                cout <<"Bano: ";
                cin >> ban;
                cout << "Desparasitantes: ";
                cin >> des;
                cout << "Pedicure: ";
                cin >> ped;

                gato.set_nombre(nom);
                gato.set_tipo_mascota(tip);
                gato.set_raza(raz);
                gato.set_tamano(tam);
                gato.set_edad(ed);
                
                Cuidado cuidado(ban,des,ped);
                gato.set_cuidado(cuidado);
                

                cout << "\nDatos de mascotas agregados correctamente\n";
                break;
            }

            // Mostrar productos
            case 5: {
                // Mostrar datos del producto 'Cepillo para Perros'
                mostrarProducto_cepillo(tienda);
                mostrarProducto_cama(tienda);
                break;
            }
            
            // Mostrar alimentos
            case 6: {
                mostrarAlimento_humedo(alimento_humedo);
                mostrarAlimento_seco(alimento_seco);
                break;
            }

            // Mostrar mascotas
            case 7: {
                mostrarPerro(perro);
                mostrargato(gato);
                break;
            }
        }
    }
    
    while(opcion != 8); // Salir cuando la opción sea 8

    return 0;
}
