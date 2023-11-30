#ifndef COMIDA_H
#define COMIDA_H
#include <string>
#include <sstream>
#include <iostream>
#include "Producto.h"
using namespace std;

//Agrego la sintaxis de herencia para indicar que tiene atributos de Producto
class Comida: public Producto{
//atributos propios de comida
    private:
        string calorias;
        string cocina;
    public:
//constructor sin implementación, únicamente definición
     Comida (string articulo_, int precio_, int cantidad_, string calorias_, string cocina_);

    //getters de la clase
    string getCocina();
    string getCalorias();

    //setters de la clase
    void setCocina(string);
    void setCalorias(string);

//método de la clase que es propio de ella
    string imprimirComida();

};
//constructor ya implementado más sus propios parámetros
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
//método propio que devuelve un string y no un void
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

