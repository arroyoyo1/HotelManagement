//Clase Ticket

#ifndef TICKET_H
#define TICKET_H
#include <string>
#include <iostream>
#include <vector>
#include "Bebida.h"
#include "Comida.h"
#include "Cliente.h"
#include "Producto.h"
using namespace std;

class Ticket{
    private:
        string numeroFolio;
        vector<Producto> productos;
        vector<Comida> comidas;
        vector<Bebida> bebidas;

    public:
    // Constructor por parámetros
    // El vector productos se inicializó como un vector vacío
    // Agregación
    Ticket(){}
    Ticket (string numeroFolio_);
    //Getter
    string getnumeroFolio();
    //Setter
    void setnumeroFolio(string);
    void agregarProducto(Producto);
    void agregarBebida(Bebida);
    void agregarComida(Comida);
    void imprimirProductos();
    float precioTicket();
};

Ticket::Ticket (string numeroFolio_){
    numeroFolio = numeroFolio_;
}

string Ticket::getnumeroFolio(){
    return numeroFolio;
}
void Ticket::setnumeroFolio(string numreroFolio_){
    numeroFolio = numreroFolio_;
}
//Agrega los productos que desees siempre y cuando se use esta funcion
void Ticket::agregarProducto(Producto nuevo_producto){
    productos.push_back(nuevo_producto);
}

void Ticket::agregarComida(Comida nueva_comida){
    comidas.push_back(nueva_comida);
}

void Ticket::agregarBebida(Bebida nueva_bebida){
    bebidas.push_back(nueva_bebida);
}


float Ticket::precioTicket(){
    float precio_total = 0.0;
    for(int i = 0; i < productos.size(); i++){
        precio_total += productos[i].precioFinal();

    }
    for(int i = 0; i < comidas.size(); i++){
        precio_total += comidas[i].precioFinal();

    }
    for(int i = 0; i < bebidas.size(); i++){
        precio_total += bebidas[i].precioFinal();

    }
    return precio_total;
}

void Ticket::imprimirProductos(){
   for (int i=0;i<productos.size();i++){i;}
}



#endif
