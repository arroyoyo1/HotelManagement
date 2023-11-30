//Clase Comida

#ifndef COMIDA_H
#define COMIDA_H
#include <string>
#include <sstream>
#include <iostream>
#include "Producto.h"
using namespace std;

//Hereda atributos de la clase producto
class Comida: public Producto{
    private:
        string calorias;
        string cocina;
    public:

     Comida (string articulo_, int precio_, int cantidad_, string calorias_, string cocina_);

    //Getters
    string getCocina();
    string getCalorias();

    //Setters
    void setCocina(string);
    void setCalorias(string);


    string imprimirComida();

};

Comida::Comida (string articulo_, int precio_, int cantidad_, string calorias_, string cocina_): Producto (articulo_, precio_, cantidad_){
    calorias = calorias_;
    cocina = cocina_;
}

string Comida::getCocina(){
    return cocina;
}

string Comida::getCalorias(){
    return calorias;
}

void Comida::setCalorias(string calorias_){
    calorias = calorias_;
}

void Comida::setCocina(string cocina_){
    cocina = cocina_;
}

string Comida::imprimirComida() {

    string result;

    result += "\n";
    result += "\t\tEl producto comida: " + getArticulo() + "\n";
    result += "\t\tPrecio: " + to_string(getPrecio()) + "\n";
    result += "\t\tTipo de cocina del platillo: " + cocina + "\n";
    result += "\t\tCantidad de calorias (1 pieza): " + calorias + " calorias" + "\n";
    result += "\t\tLa cantidad a pagar por " + to_string(getCantidad()) + " " + getArticulo() + " es de " + to_string(precioFinal()) + "\n";

    return result;
}
#endif

