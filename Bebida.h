//Clase Bebida

#ifndef BEBIDA_H
#define BEBIDA_H
#include <string>
#include <iostream>
#include <sstream>
#include "Producto.h"
using namespace std;

//Hereda atributos de la clase producto
class Bebida: public Producto{
    private:
        string mililitros;
        string gusto;
    public:

     Bebida (string articulo_, int precio_, int cantidad_, string mililitros_, string gusto_);

    //Getters
    string getMililitros();
    string getGusto();

    //Setters
    void setMililitros(string);
    void setGusto(string);


    string imprimirBebida();

};

Bebida::Bebida (string articulo_, int precio_, int cantidad_, string mililitros_, string gusto_): Producto (articulo_, precio_, cantidad_){
    mililitros_ = mililitros_;
    gusto = gusto_;
}

string Bebida::getMililitros(){
    return mililitros;
}

string Bebida::getGusto(){
    return gusto;
}

void Bebida::setMililitros(string mililitros_){
    mililitros = mililitros_;
}

void Bebida::setGusto(string gusto_){
    gusto = gusto_;
}

string Bebida::imprimirBebida(){

    string resultao;

    resultao += "\n";
    resultao += "\t\tEl producto bebida: " + getArticulo() + "\n";
    resultao += "\t\tPrecio: " + to_string(getPrecio()) + "\n";
    resultao += "\t\tCantidad de mililitros (1 pieza): " + mililitros + "\n";
    resultao += "\t\tSabor de la bebida: " + gusto + "\n";
    resultao += "\t\tLa cantidad a pagar por " + to_string(getCantidad()) + " " + getArticulo() + " es de " + to_string(getPrecio()) + "\n";

    return resultao;


}

#endif
