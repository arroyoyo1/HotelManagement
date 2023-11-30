#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include <iostream>
using namespace std;

class Cliente
{
//atributos de la clase
    private:
        string nombre;
        string apellido;
        string direccion;
        string celular;
    public:
    //defino el constructor con sus respectivos parámetros
    Cliente (string apellido_, string nombre_, string direccion_, string celular_);
    //getters de la clase
    string getNombre();
    string getApellido();
    string getDireccion();
    string getCelular();
    //setters de la clase
    void setNombre(string);
    void setApellido(string);
    void setDireccion(string);
    void setCelular(string);
//método propio de la clase
    string imprimirInfo();
};
//implemento el constructor una vez definido
Cliente::Cliente (string apellido_, string nombre_, string direccion_, string celular_){
    nombre = nombre_;
    apellido = apellido_;
    direccion = direccion_;
    celular = celular_;
}

string Cliente::getNombre(){
    return nombre;
}
string Cliente::getApellido(){
    return apellido;
}
string Cliente::getDireccion(){
    return direccion;
}
string Cliente::getCelular(){
    return celular;
}
void Cliente::setNombre(string nombre_){
    nombre = nombre_;
}
void Cliente::setApellido(string apellido_){
    apellido = apellido_;
}
void Cliente::setDireccion(string direccion_){
    direccion = direccion_;
}
void Cliente::setCelular(string celular_){
    celular = celular_;
}
//método que devuelve un string y no un void
string Cliente::imprimirInfo() {
    string info;

    info += "\n\t\t--Cliente--\n";
    info += "\t\tCliente: " + nombre + " " + apellido + "\n";
    info += "\t\tDireccion: " + direccion + "\n";
    info += "\t\tCelular: " + celular + "\n";

    return info;
}


#endif
