//Clase Ticket

#ifndef TICKET_H
#define TICKET_H
#include <string>
#include <iostream>
#include <vector>
#include "Bebida.h"
#include "Cliente.h"
#include "Producto.h"
using namespace std;

class Ticket{
    private:
        string numeroFolio;
        vector<Producto> productos;
    public:
    // Constructor por parametros
    // El vector productos se inicializo como un vector vacio
    // Agregacion
    Ticket(){}
    Ticket (string numeroFolio_){
           numeroFolio = numeroFolio_;
    }
    //Getter
    string getnumeroFolio();
    //Setter
    void setnumeroFolio(string);
    void agregarProducto(Producto);
    void imprimirProductos();
    float precioTicket();
};
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
float Ticket::precioTicket(){
    float precio_total = 0;
    for (int i=0;i<productos.size();i++){
        precio_total += productos[i].precioFinal();
    }
    return precio_total;
}
void Ticket::imprimirProductos(){
   for (int i=0;i<productos.size();i++){}
}



#endif
