//Clase Producto

#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include <iostream>

using namespace std;


class Producto
{
    public:
        //Constrcutor sin parametros, solo inicializamos valores
       Producto();

        //Constructor de parametros
        Producto(string articulo_, int precio_, int cantidad_);


        //Setters
        void setArticulo(string);
        void setPrecio(int);
        void setCantidad(int);

        //Getters
        string getArticulo();
        int getPrecio();
        int getCantidad();
        int precioFinal();
        string ticket();


    private:
        string articulo;
        int precio, cantidad, total;
};
Producto::Producto(){
    articulo = " ";
    precio = 0;
    cantidad = 0;
    total = 0;
}

Producto::Producto(string articulo_, int precio_, int cantidad_){
            articulo = articulo_ ;
            precio = precio_ ;
            cantidad = cantidad_;
        }

string Producto::getArticulo(){
    return articulo;
}

int Producto::getPrecio(){
    return precio;
}

int Producto::getCantidad(){
    return cantidad;
}

void Producto::setArticulo(string articulo_){
    articulo = articulo_;
}

void Producto::setPrecio(int precio_){
    precio = precio_;
}

void Producto::setCantidad(int cantidad_){
    cantidad = cantidad_;
}

int Producto::precioFinal(){
    total = precio*cantidad;
    return total;
}
//Función para imprimir datos
string Producto::ticket() {
    stringstream ss;

    ss << "\n\t\tEl producto es: " << articulo << endl;
    ss << "\t\tPrecio: " << precio << endl;
    ss << "\t\tCantidad: " << cantidad << endl;
    ss << "\t\tLa cantidad a pagar por " << cantidad << " " << articulo << " es de " << total << endl;

    // Return the concatenated string
    return ss.str();
}


#endif

