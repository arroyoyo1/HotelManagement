//Clase Bebida

#ifndef BEBIDA_H
#define BEBIDA_H
#include <string>
#include <iostream>
#include "Producto.h"
using namespace std;

//Hereda atributos de la clase producto
class Bebida: public Producto{
    private:
        string mililitros;
        string gusto;
    public:

     Bebida (string articulo_, int precio_, int cantidad_, string mililitros_, string gusto_):
     Producto (articulo_, precio_, cantidad_){
            mililitros = mililitros_;
            gusto = gusto_;
        }
    //Getters
    string getMililitros();
    string getGusto();

    //Setters
    void setMililitros(string);
    void setGusto(string);
    void imprimirBebida();

};

void Bebida::imprimirBebida(){

    cout<<"\n\t\t--TICKET--\n"<<endl;
	cout<<"\t\tEl producto bebida: "<<getArticulo()<<endl;
    cout<<"\t\tPrecio: "<<getPrecio()<<endl;
    cout<<"\t\tCantidad de mililitros de la bebida (1 pieza): "<<mililitros<<endl;
    cout<<"\t\tSabor de la bebida: "<<gusto<<endl;
    cout<<"\t\tLa cantidad a pagar por "<<getCantidad()<<" "<<getArticulo()<<" es de "<<getPrecio()<< endl;

}

#endif
