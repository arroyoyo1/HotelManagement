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
//defino la clase
class Ticket{
//defino atributo
    private:
        string numeroFolio;
//creo los vectores donde se almacenarán productos, comidas y bebidas
        vector<Producto> productos;
        vector<Comida> comidas;
        vector<Bebida> bebidas;
//defino constructor vacío y con parámetros pero sin implementación
    public:
    
    Ticket(){}
    Ticket (string numeroFolio_);
    //getter
    string getnumeroFolio();
    //setter
    void setnumeroFolio(string);

//funciones para agregar productos, comidas y bebidas en sus respectivos vectores y la que da el precio de TODOS los productos
    void agregarProducto(Producto);
    void agregarBebida(Bebida);
    void agregarComida(Comida);
    void imprimirProductos();
    float precioTicket();
};
//constructor implementado con parámetro
Ticket::Ticket (string numeroFolio_){
    numeroFolio = numeroFolio_;
}

string Ticket::getnumeroFolio(){
    return numeroFolio;
}
void Ticket::setnumeroFolio(string numreroFolio_){
    numeroFolio = numreroFolio_;
}
//agrega productos de las 3 índoles siempre y cuando se use el método apropiado respectivamente
void Ticket::agregarProducto(Producto nuevo_producto){
    productos.push_back(nuevo_producto);
}

void Ticket::agregarComida(Comida nueva_comida){
    comidas.push_back(nueva_comida);
}

void Ticket::agregarBebida(Bebida nueva_bebida){
    bebidas.push_back(nueva_bebida);
}

//calcula el precio de todos los productos dentro de los vectores mientras itera cada uno y al final los suma y los guarda en la variable
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
//imprime los productos
void Ticket::imprimirProductos(){
   for (int i=0;i<productos.size();i++){i;}
}



#endif
