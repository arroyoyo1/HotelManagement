#ifndef BEBIDA_H
#define BEBIDA_H
#include <string>
#include <iostream>
#include <sstream>
#include "Producto.h"
using namespace std;

//pongo la sintaxis para indicar que hereda los atributos de producto
class Bebida: public Producto{
//atributos propios de bebida
    private:
        string mililitros;
        string gusto;
    public:
//inicializo el constructor sin implementar, solo inicializo
     Bebida (string articulo_, int precio_, int cantidad_, string mililitros_, string gusto_);

    //getters de la clase
    string getMililitros();
    string getGusto();

    //setters de la clase
    void setMililitros(string);
    void setGusto(string);

    //método propio de bebida
    string imprimirBebida();

};
//constructor implementado y agregando los atributos propios de la clase
Bebida::Bebida (string articulo_, int precio_, int cantidad_, string mililitros_, string gusto_): Producto (articulo_, precio_, cantidad_){
    mililitros_ = mililitros_;
    gusto = gusto_;
}
//implemento getters
string Bebida::getMililitros(){
    return mililitros;
}

string Bebida::getGusto(){
    return gusto;
}
//implemento setters
void Bebida::setMililitros(string mililitros_){
    mililitros = mililitros_;
}

void Bebida::setGusto(string gusto_){
    gusto = gusto_;
}
//método propio que devuelve un string
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
