//Clase Cliente

#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include <iostream>
using namespace std;

class Cliente
{
    private:
        string nombre;
        string apellido;
        string direccion;
        string celular;
    public:
    //Construcutor con parámetros
    Cliente (string apellido_, string nombre_, string direccion_, string celular_){
        nombre = nombre_;
        apellido = apellido_;
        direccion = direccion_;
        celular = celular_;
    }
    //Getters
    string getNombre();
    string getApellido();
    string getDireccion();
    string getCelular();
    //Setters
    void setNombre(string);
    void setApellido(string);
    void setDireccion(string);
    void setCelular(string);
    void imprimirInfo();
};

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
void Cliente::imprimirInfo(){
    cout<<"\n\t\t--Cliente--\n"<<endl;
	cout<<"\t\tCliente: "<<nombre<<" "<<apellido<<endl;
    cout<<"\t\tDireccion: "<<direccion<<endl;
    cout<<"\t\tCelular: "<<celular<<endl;
}

#endif
