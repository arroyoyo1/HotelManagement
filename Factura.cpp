#include <iostream>
#include <string>
#include <cstdlib>
#include "Ticket.h"
#include "Comida.h"
#include "Bebida.h"
using namespace std;


void menu(){ //Menú de lo que puede hacer el programa

		cout<<"\n\n\n\t\t Bienvenido al centro de facturas del Hotel\n"<<endl;
		cout<<"\t\t 1 - Realizar factura del cliente 1 "<<endl;
		cout<<"\t\t 2 - Realizar factura del cliente 2 "<<endl;
		cout<<"\t\t 3 - Realizar factura del cliente 3"<<endl;
		cout<<"\t\t 4 - Salir"<<endl;

}

int main() {

	int opcion; //Variable para escoger opción de salir o empezar
	opcion=1;

	int opcionProducto = 0;
	string nombre = "";
	string apellido = "";
	string direccion = "";
	string numero = "";

	int continua;//Variable para ciclar el prgrama
	continua=0;

	while(continua ==0){ //Ciclo While
		menu();
		cin>>opcion;

        if(opcion==1){

            cout<<"\n\t\t--TICKET--"<<endl;
            //Creo el objeto de la clase producto
            Producto producto1 ("Repuesto de sabanas",250, 2);
            Producto producto2 ("Funda para almohada",120, 4);
            //Creo el objeto de la clase cliente
            Cliente cliente1 ("Arroyo", "Mauricio", "Epigmenio Gonzalez 500","4619125782");
            //Le agrego el número de folio al ticket creando un objeto
            Ticket ticket1 ("043778");
            //Agrego los objetos de producto al ticket
            ticket1.agregarProducto (producto1);
            ticket1.agregarProducto (producto2);
            //Con estos objetos saco el precio final de cada producto (no total)
            producto1.precioFinal();
            producto2.precioFinal();
            //Imprimo los tickets
            cout << producto1.ticket();
            cout << producto2.ticket();
            //Precio en conjunto de todos los productos
            cout<<"\t\tTotal a pagar: "<<ticket1.precioTicket()<<endl;
            //Imprimo los datos del cliente
            cout<<cliente1.imprimirInfo();
            //Imprimo el numero de folio
            cout<<"\t\tNumero de ticket: "<<ticket1.getnumeroFolio()<<endl;

        }
        //Esta opción es para demostrar que se pueden agregar mas de un
        //producto
        else if(opcion==2){

            cout<<"\n\t\t--TICKET--"<<endl;
            cout<<"Este ticket solo genera un producto";
            cout<<"Elige uno de los siguientes productos: 1.Termo | 2. Toalla | 3. Antifaz"<<endl;
            cin>>opcionProducto;
            cout<<"Introduce tu nombre"<<endl;
            cin>>nombre;
            cout<<"Introduce tu apellido"<<endl;
            cin>>apellido;
            cout<<"Introduce tu direccion"<<endl;
            cin>>direccion;
            cout<<"Introduce tu numero"<<endl;
            cin>>numero;


            Producto producto;

            if (opcionProducto == 1){
                producto.setArticulo ("Termo");
                producto.setPrecio (800);
                producto.setCantidad(1);
            }

            if (opcionProducto == 2){
                producto.setArticulo ("Toalla");
                producto.setPrecio (350);
                producto.setCantidad(3);
            }

            if (opcionProducto == 3){
                producto.setArticulo ("Antifaz");
                producto.setPrecio (200);
                producto.setCantidad(2);
            }


            Cliente clientePersonalizado (apellido, nombre, direccion, numero);
            Ticket ticket2 ("785241");


            ticket2.agregarProducto(producto);
            producto.precioFinal();
            cout << producto.ticket();

            cout<<"\t\tPrecio Total a pagar: "<<ticket2.precioTicket()<<endl;

            cout<<clientePersonalizado.imprimirInfo();

            cout<<"\t\tNumero de ticket: "<<ticket2.getnumeroFolio()<<endl;


        }
        else if(opcion==3){

            //Utilizo estas sub-clases para los productos que sean únicamente de
            //orden alimenticio y poder mostrar las calorias, tipo de cocina, sabor
            //y mililitros de dichos productos
            cout<<"\n\t\t--TICKET--"<<endl;
            Comida comida1 ("Pasta Farfalle",370, 2, "180.85","Italiana");
            Comida comida2 ("Tlayuda de Milanesa", 110, 1, "260.56", "Mexicana");
            Bebida bebida1 ("Aperol Spritz", 190, 1, "110", "Ligeramente amargo");
            Bebida bebida2 ("Vino Tinto",89, 1,"340", "Afrutado y con un toque amaderado");

            Cliente cliente3 ("Villanueva", "Felipe","Los Encinos 423","525613061");

            Ticket ticket3 ("498430");

            ticket3.agregarComida (comida1);
            ticket3.agregarComida (comida2);
            ticket3.agregarBebida (bebida1);
            ticket3.agregarBebida (bebida2);

            comida1.precioFinal();
            cout << comida1.imprimirComida();
            comida2.precioFinal();
            cout << comida2.imprimirComida();
            bebida1.precioFinal();
            cout << bebida1.imprimirBebida();
            bebida2.precioFinal();
            cout << bebida2.imprimirBebida();

            cout<<cliente3.imprimirInfo();

            cout<<"\t\tPrecio total a pagar: "<<ticket3.precioTicket()<<endl;
            cout<<"\t\tNumero de ticket: "<<ticket3.getnumeroFolio()<<endl;

           }
           //Sale del Ciclo While
           else if(opcion==4){
			cout<<"Disfruta tus productos"<<endl;
			continua = continua+1;
           }

           else{
			cout<<"Error: Opcion no valida"<<endl;
			continua = continua+1;
		}
    }
    return 0;
}
