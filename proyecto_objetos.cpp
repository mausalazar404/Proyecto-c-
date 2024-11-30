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
#include <limits>
using namespace std;

// Función para validar entrada numérica (int)
int validarEntero() {
    int valor;
    while (!(cin >> valor)) {
        cout << "Entrada invalida. Ingrese un numero entero: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return valor;
}

// Función para validar entrada numérica (float)
float validarFloat() {
    float valor;
    while (!(cin >> valor)) {
        cout << "Entrada invalida. Ingrese un numero flotante: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return valor;
}

// Función para validar entrada de texto (string)
string validarTexto() {
    string texto;
    cin >> texto;
    while (texto.empty()) {
        cout << "Entrada invalida. Ingrese texto sin espacios: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> texto;
    }
    return texto;
}

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
    cout << "Bano: " << cuidado.get_bano() << endl;  
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
    cout << "Bano: " << cuidado.get_bano() << endl;  
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
        opcion = validarEntero(); // Leer y validar opción

        switch(opcion){
            
            // Código para agregar productos
            case 1: {
                string nombre, ubicacion, tamano, cepillo_nombre, categoria, 
                material, suavidad, cama_material, cama_nombre,
                cama_categoria, cama_suavidad, cama_tamano;
                float precio_cepillo, cama_precio;
                int stock_cepillo, cama_stock;

                cout << "Ingrese el nombre de la tienda: ";
                nombre = validarTexto();
                cout << "Ingrese la ubicacion de la tienda: ";
                ubicacion = validarTexto();
                cout << "Ingrese el tamano de la tienda: ";
                tamano = validarTexto();

                cout << "\n--- Datos del Cepillo para Perros ---" << endl;
                cout << "Nombre del cepillo: ";
                cepillo_nombre = validarTexto();
                cout << "Precio del cepillo: ";
                precio_cepillo = validarFloat();
                cout << "Stock del cepillo: ";
                stock_cepillo = validarEntero();
                cout << "Categoria del cepillo: ";
                categoria = validarTexto();
                cout << "Material del cepillo: ";
                material = validarTexto();
                cout << "Suavidad del cepillo: ";
                suavidad = validarTexto();

                // Crear el objeto Cepillo_perros
                Cepillo_perros cepillo(cepillo_nombre, precio_cepillo,
                stock_cepillo, categoria, material, suavidad);

                cout << "\n--- Datos de cama para Perros ---" << endl;
                cout << "Nombre de la cama: ";
                cama_nombre = validarTexto();
                cout << "Precio de la cama: ";
                cama_precio = validarFloat();
                cout << "Stock de la cama: ";
                cama_stock = validarEntero();
                cout << "Categoria de la cama: ";
                cama_categoria = validarTexto();
                cout << "Material de la cama: ";
                cama_material = validarTexto();
                cout << "Suavidad de la cama: ";
                cama_suavidad = validarTexto();
                cout << "Tamano de la cama: ";
                cama_tamano = validarTexto();

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
                ta_h = validarTexto();
                cout << "Tamanio del paquete: ";
                tp_h = validarTexto();
                cout << "Sabor: ";
                s_h = validarTexto();
                cout << "Marca: ";
                m_h = validarTexto();
                cout << "Para que edad es: ";
                e_h = validarEntero();

                cout << "\n--- Datos alimento seco ---" << endl;
                cout << "Tipo de animal: ";
                ta_s = validarTexto();
                cout << "Tamanio del paquete: ";
                tp_s = validarTexto();
                cout << "Sabor: ";
                s_s = validarTexto();
                cout << "Marca: ";
                m_s = validarTexto();
                cout << "Para que edad es: ";
                e_s = validarEntero();
                cout << "Dureza del alimento: ";
                d_s = validarTexto();

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
                nom = validarTexto();
                cout << "Tipo de mascota: ";
                tip = validarTexto();
                cout << "Raza: ";
                raz = validarTexto();
                cout << "Tamano de mascota: ";
                tam = validarTexto();
                cout << "Edad: ";
                ed = validarEntero();
                cout << "Cuidado de la mascota" << endl;
                cout <<"Bano: ";
                ban = validarTexto();
                cout << "Desparasitantes: ";
                des = validarTexto();
                cout << "Pedicure: ";
                ped = validarTexto();

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
                nom = validarTexto();
                cout << "Tipo de mascota: ";
                tip = validarTexto();
                cout << "Raza: ";
                raz = validarTexto();
                cout << "Tamano de mascota: ";
                tam = validarTexto();
                cout << "Edad: ";
                ed = validarEntero();
                cout << "Cuidado de la mascota" << endl;
                cout <<"Bano: ";
                ban = validarTexto();;
                cout << "Desparasitantes: ";
                des = validarTexto();
                cout << "Pedicure: ";
                ped = validarTexto();

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
