Contexto del proyecto

¿Para qué sirve? 
Este proyecto sirve para ver de manera visual los productos, precio, cantidad y en caso de ser ingeribles,
características como calorías, mililitros, sabor, y tipo de cocina de los alimentos; Esto con el fin de imitar
la factura de ticket en un hotel y poder tener un registro de los ingresos para el hotel así como de los egresos
del cliente el cual también se pueden ver sus atributos de forma gráfica usando métodos de la clase homónima, 
tales como nombre, apellido, dirección y celular. De la misma manera  al final se genera un ticket (dentro de 
la terminal) el cual pretende ser lo que en la vida real sería el ticket donde se incluye un número de folio
único para cada cliente, la fecha en que se solicita y el nombre del cliente al que corresponde. En el primer 
caso se muestra el funcionamiento del programa cuando solo son productos normales (no comestibles) y en el 
segundo se vuelve un poco más interactivo ya que el usuario puede elegir qué item quiere comprar y se le pregunta
su nombre, apellido, dirección y número celular para poder plasmarlo en el ticket. En el tercer caso se muestra
el funcionamiento de las clases Comida y Bebida que son herencias de Producto y se pueden agregar más con el 
método de agregarComida y agregarBebida.


-Formato del Ticket--

Producto
Precio
Cantidad (Productos)
Cantidad a pagar (Total)
Nombre del Cliente
Direccion
Celular
Número de Folio

¿Para qué no sirve?
El programa funciona con 5 clases y un archivo tipo cpp que es el main.
Este proyecto por ejemplo, no sirve para administrar ninguna otra función del hotel, así como hacer check-in,
sin embargo se puede ampliar y conforme vaya obteniendo más conocimiento hacer un software integro de hotel
management. 

¿Cómo se usa? 
Para usarlo, una consideración a tener en cuenta es que hay que tener abiertos los archivos de las clases así
como el main para ser compilado y ejecutado y de momento no se han incluido inputs para que el usuario cree sus
propios tickets, pero tiene parámetros dentro de Factura.cpp en el cual se pueden editar dichos datos para generar
diferentes tickets y jugar con las posibilidades del hotel. 



