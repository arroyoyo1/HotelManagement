#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include <iostream>

using namespace std;

//defino la clase con la palabra reservada
class Producto
{
//también defino el constructor vacío y con parámetros
    public:
       
       Producto();

    
        Producto(string articulo_, int precio_, int cantidad_);


        //setters
        void setArticulo(string);
        void setPrecio(int);
        void setCantidad(int);

        //getters
        string getArticulo();
        int getPrecio();
        int getCantidad();
        int precioFinal();

//método especial de Producto
        string ticket();

//atributos de la clase
    protected:
        string articulo;
        int precio, cantidad, total;
};
//constructor implementado pero con valores default 
Producto::Producto(){
    articulo = " ";
    precio = 0;
    cantidad = 0;
    total = 0;
}
//constructor implementado e inicializado con los valores que tomará
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
//función para imprimir datos del producto
string Producto::ticket() {
    stringstream ss;

    ss << "\n\t\tEl producto es: " << articulo << endl;
    ss << "\t\tPrecio: " << precio << endl;
    ss << "\t\tCantidad: " << cantidad << endl;
    ss << "\t\tLa cantidad a pagar por " << cantidad << " " << articulo << " es de " << total << endl;

    // regresa la info de la variable concatenada
    return ss.str();
}


#endif

