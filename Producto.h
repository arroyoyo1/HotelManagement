//Clase Producto

#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include <iostream>

using namespace std;


class Producto
{
    public:
        //Constrcutor sin parametros, solo inicialisamos valores
       Producto(){
            articulo = " ";
            precio = 0;
            cantidad = 0;
            total = 0;
        }

        //Constructor de parametros
        Producto(string articulo_, int precio_, int cantidad_){
            articulo = articulo_;
            precio = precio_;
            cantidad = cantidad_;
        }


        //Setters
        void setArticulo(string);
        void setPrecio(int);
        void setCantidad(int);

        //Getters
        string getArticulo();
        int getPrecio();
        int getCantidad();
        int precioFinal();
        void ticket();


    private:
        string articulo;
        int precio, cantidad, total;
};


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
//Funcion para imprimir datos
void Producto::ticket(){

    cout<<"\n\t\tEl producto es: "<<articulo<<endl;
    cout<<"\t\tPrecio: "<<precio<<endl;
    cout<<"\t\tCantidad: "<<cantidad<<endl;
    cout<<"\t\tLa cantidad a pagar por "<<cantidad<<" "<<articulo<<" es de "<<total<< endl;

};

#endif
