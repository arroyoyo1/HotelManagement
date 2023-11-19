//Clase Comida

#ifndef COMIDA_H
#define COMIDA_H
#include <string>
#include <iostream>
#include "Producto.h"
using namespace std;

//Hereda atributos de la clase producto
class Comida: public Producto{
    private:
        string calorias;
        string cocina;
    public:

     Comida (string articulo_, int precio_, int cantidad_, string calorias_, string cocina_):
     Producto (articulo_, precio_, cantidad_){
            calorias = calorias_;
            cocina = cocina_;
        }
    //Getters
    string getCocina();
    string getCalorias();

    //Setters
    void setCocina(string);
    void setCalorias(string);
    void imprimirComida();

};

void Comida::imprimirComida(){

    cout<<"\n\t\t--TICKET--\n"<<endl;
	cout<<"\t\tEl producto comida: "<<getArticulo()<<endl;
    cout<<"\t\tPrecio: "<<getPrecio()<<endl;
    cout<<"\t\tTipo de cocina del platillo: "<<cocina<<endl;
    cout<<"\t\tCantidad de calorias (1 pieza): "<<calorias<<" calorias"<<endl;
    cout<<"\t\tLa cantidad a pagar por "<<getCantidad()<<" "<<getArticulo()<<" es de "<<getPrecio()<< endl;

}

#endif
