#include <iostream>
#include <string>
#include <cstdlib>
#include "Ticket.h"
#include "Comida.h"
using namespace std;


void menu(){ //Menú de lo que puede hacer el programa

		cout<<"\n\n\n\t\t Bienvenidx al centro de facturas del Hotel\n"<<endl;
		cout<<"\t\t 1 - Realizar factura del cliente 1 "<<endl;
		cout<<"\t\t 2 - Realizar factura del cliente 2 "<<endl;
		cout<<"\t\t 3 - Realizar factura del cliente 3"<<endl;
		cout<<"\t\t 4 - Salir"<<endl;

}

int main() {

	int opcion; //Variable para escoger opción de salir o empezar
	opcion=1;

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
            producto1.ticket();
            producto2.ticket();
            //Precio en conjunto de todos los productos
            cout<<"\t\tTotal a pagar: "<<ticket1.precioTicket()<<endl;
            //Imprimo los datos del cliente
            cliente1.imprimirInfo();
            //Imprimo el numero de folio
            cout<<"\t\tNumero de folio: "<<ticket1.getnumeroFolio()<<endl;

        }
        //Esta opción es para demostrar que se pueden agregar mas de un
        //producto
        else if(opcion==2){

            cout<<"\n\t\t--TICKET--"<<endl;
            Producto producto3 ("Termo",800,1);
            Producto producto4 ("Toalla",350,3);
            Producto producto5 ("Antifaz",200,2);

            Cliente cliente2 ("- Man", "Spider", "69th Road, Queens ","1718831695");

            Ticket ticket2 ("785241");

            //Puedo agregar a ticket los productos que desee
            ticket2.agregarProducto (producto3);
            ticket2.agregarProducto (producto4);
            ticket2.agregarProducto (producto5);

            producto3.precioFinal();
            producto4.precioFinal();
            producto5.precioFinal();

            producto3.ticket();
            producto4.ticket();
            producto5.ticket();

            cout<<"\t\tTotal a pagar: "<<ticket2.precioTicket()<<endl;

            cliente2.imprimirInfo();

            cout<<"\t\tNumero de folio: "<<ticket2.getnumeroFolio()<<endl;


        }
        else if(opcion==3){

            //Utilizo estas sub-clases para los productos que sean únicamente de
            //orden alimenticio y poder mostrar las calorias, tipo de cocina, sabor
            //y mililitros de dichos productos
            cout<<"\n\t\t--TICKET--"<<endl;
            Comida comida1 ("Pasta Farfalle",370, 2, "180.85","Italiana");
            Comida comida2 ("Tlayuda de Milanesa", 110, 1, "260.56", "Mexicana");
            Bebida bebida1 ("Aperol Spritz", 190, 1, "110 ml", "Ligeramente amargo");
            Bebida bebida2 ("Kosako",89, 1,"2000 ml", "Sabe a elixir de los dioses");

            Cliente cliente3 ("Flow", "Danny","Agricola Oriental 423","525613061");

            Ticket ticket3 ("498430");

            ticket3.agregarProducto (comida1);
            ticket3.agregarProducto (comida2);
            ticket3.agregarProducto (bebida1);
            ticket3.agregarProducto (bebida2);

            comida1.precioFinal();
            comida1.imprimirComida();
            comida2.precioFinal();
            comida2.imprimirComida();
            bebida1.precioFinal();
            bebida1.imprimirBebida();
            bebida2.precioFinal();
            bebida2.imprimirBebida();

            Comida imprimirComida();
            Bebida imprimirBebida();
            cliente3.imprimirInfo();

            cout<<"\t\tTotal a pagar: "<<ticket3.precioTicket()<<endl;


            cout<<"\t\tNumero de folio: "<<ticket3.getnumeroFolio()<<endl;

           }
           //Sale del Ciclo While
           if(opcion==4){
			cout<<"Gracias por utilizar ese programa"<<endl;
			continua = continua+1;
           }

           else{
			cout<<"Error"<<endl;
			continua = continua+1;
		}
    }
    return 0;
}
