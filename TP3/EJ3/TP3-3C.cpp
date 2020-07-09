/* 
  Una empresa nos pide el armado de una App para la toma de pedidos, primero deberá presentar 
  un menú de Opciones de 4 productos a) Simple b)medio c)calidad d)Premiun 
  luego nos deberá mostrar en menú de tipo de envio: 1) normal 2) express 3) Fast Delivery.
  A posteriori deberá mostrar x consola el producto seleccionado y el tipo de envío que eligió.
  PD. Usar Funciones, manteniendo un Main lo “mas pequeño posible”,  desacoplando las funcionalidades. 
  Trabajar con la visibilidad de los operadores vistos, while Swtch If ….
*/

#include <iostream>
#include <string>

using namespace std;

void mostrarTitulo();
void tomarPedido();
string menuProductos();
string menuEnvios();

int main (){
  tomarPedido();
  return 0;
}

string menuProductos(){
  int op;
  string desc;
  typedef enum { simple, medio, calidad, premium, count } tProductos;

  do {
    mostrarTitulo();
    cout << "1) Simple\n"
         << "2) Normal\n"
         << "3) Calidad\n"
         << "4) Premium\n"
         << "0) Salir\n"
         << "Elija el tipo de producto: ";
    cin >> op;
  } while ( op > tProductos::count ); // Validacion de datos para que solo se ingrese una opcion valida.

    switch ( op - 1 ){
      case simple:
        desc = "Simple";
        break;

      case medio:
        desc = "Medio";
        break;
      
      case calidad:
        desc = "Calidad";
        break;

      case premium:
        desc = "Premium";
        break;
        
    }
    
  return desc;
}

string menuEnvios(){
  int op;
  string desc;
  typedef enum { normal, express, fast, count } tEnvios;

  do {
    mostrarTitulo();
    cout  << "1) Normal\n"
          << "2) Express\n"
          << "3) Fast\n"
          << "0) Volver\n"
          << "Elija tipo de envio: ";
    cin >> op;
  } while ( op > tEnvios::count ); // Validacion de datos para que solo se ingrese una opcion valida.

  switch (op - 1){
    case normal:
      desc = "Normal";
      break;

    case express:
      desc = "Express";
      break;

    case fast:
      desc = "Fast";
      break;
  }

  return desc;
}

void tomarPedido(){
  string producto, envio;
  bool repeat = true; // Evita la finalizacion del programa hasta que el usuario ingrese la opcion "Salir" (0).

  do { 
    producto = menuProductos();
    if ( !producto.empty() ){
      envio = menuEnvios();
      if ( !envio.empty() ) {
        mostrarTitulo();
        cout  << "Producto seleccionado: " << producto 
              << "\nTipo de envio: " << envio << endl;
              
        cout << "\nPresione una tecla para salir ..."; // Detengo la ejecucion para darle tiempo al usuario a leer el resultado.
        cin.get();
        cin.ignore();
      } 
    } else repeat = false;
  } while ( repeat == true ); 
}

void mostrarTitulo(){
  system("cls"); // Limpiar pantalla.
  cout << "-----% Sistema de Pedidos -----\n"; 
}