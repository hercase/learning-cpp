#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void clrscr();
string menuEntrada();
string menuPrincipal();
string menuPostre();
string menuMozos();
string menuMesas();
string fechaActual();

int main (){
  
  /* Una aplicacion para un restaurante que tiene, primer plato, plato principal y poste, toma pedidos de los mozos. Estos envian la comanda codificada por
  numero para cada plato. El cocinero recibe el pedido en formato de texto con el nro de mesa, nombre mozo, fecha, hora, primer plato, plato principal y
  poste. Se pide desarrollar una APP que pida la comanda y muestre por pantalla la Info solicitada.*/

  string hora, mesa, mozo, entrada, principal, postre;
  
  clrscr();
  cout << " -- Sistema de comandas -- \n";
  hora = fechaActual();
  mesa = menuMesas();
  mozo = menuMozos();
  entrada = menuEntrada();
  principal = menuPrincipal();
  postre = menuPostre();

  clrscr();

  cout << "--------------------------- COMANDA ---------------------------" << endl;
  cout << "Fecha y Hora: " << hora << " - " << mesa << " - Mozo: " << mozo << endl;
  cout << "Entrada: " << entrada << endl;
  cout << "Plato Principal: " << principal << endl;
  cout << "Postre: " << postre << endl;
  cout << "---------------------------------------------------------------" << endl;

return 0;
}

// Limpiar pantalla.
void clrscr(){
  cout << "\033[2J\033[1;1H";
}

string menuMozos(){
  clrscr();
  typedef enum { ROMINA, GONZALO, HERNAN, FRANCO, CAMILA } tMozos;
  string desc;
  int opcion = 99;

  // Evita el ingreso de valores que no existen.
  while( opcion == 0 || opcion > 5){
    clrscr();
    cout << "Ingrese codigo de mozo: ";
    cin >> opcion;
  }

  switch(opcion -= 1){
    case ROMINA:
    desc = "ROMINA ESPERANZA";
    break;

    case GONZALO:
    desc = "GONZALO HIGUAIN";
    break;
    
    case HERNAN:
    desc = "HERNAN CASE";
    break;
    
    case FRANCO:
    desc = "FRANCO MELCON";
    break;
    
    case CAMILA:
    desc = "CAMILA STEFANO";
    break;
  }
  return desc;
  
}

string menuMesas(){
  clrscr();
  typedef enum { Mesa1, Mesa2, Mesa3, Mesa4, Mesa5 } tMesas; 
  string desc;
  int opcion = 99;

  // Evita el ingreso de valores que no existen.
  while( opcion == 0 || opcion > 5){
    clrscr();
    cout << "Ingrese numero de mesa: ";
    cin >> opcion;
  }

  switch(opcion - 1){
    case Mesa1:
    desc = "MESA 1";
    break;

    case Mesa2:
    desc = "MESA 2";
    break;
    
    case Mesa3:
    desc = "MESA 3";
    break;
    
    case Mesa4:
    desc = "MESA 4";
    break;
    
    case Mesa5:
    desc = "MESA 5";
    break;
  }

  return desc;  
}

string fechaActual(){
  time_t rawtime;
  struct tm * timeinfo;
  char buffer[80];

  time (&rawtime);
  timeinfo = localtime(&rawtime);

  strftime(buffer,sizeof(buffer),"%d-%m %H:%M:%S",timeinfo);
  string str(buffer);
  return str;
}

string menuEntrada(){
  clrscr();
  typedef enum { EMPANADAS, ENSALADA, FIAMBRES, RABAS, PAPAS } tEntrada;
  int opcion = 99;
  string desc;

  // Evita el ingreso de valores que no existen.
  while( opcion == 0 || opcion > 5){
  clrscr();
  cout << "-- Platos de entrada --\n";
  cout << "1) Empanadas de carne\n";
  cout << "2) Ensalada Rusa \n";
  cout << "3) Picada \n";
  cout << "4) Porcion de rabas \n";
  cout << "5) Porcion de papas fritas \n";
  cout << "Seleccione un plato de entrada: ";
  cin >> opcion;
  }

  switch (opcion - 1){
    case EMPANADAS:
      desc = "Empanadas de carne";
      break;

    case ENSALADA:
      desc = "Ensalada Rusa";
      break;

    case FIAMBRES:
      desc = "Picada";
      break;

    case RABAS:
      desc = "Porcion de rabas";
      break;

    case PAPAS:
      desc = "Porcion de papas fritas";
      break;
  }

  return desc;
}

string menuPrincipal(){
  clrscr();
  typedef enum { MILANESAS, ARROZ, PASTAS, POLLO, SORRENTINOS } tPrincipal;
  int opcion = 99;
  string desc;

  // Evita el ingreso de valores que no existen.
  while( opcion == 0 || opcion > 5){
  clrscr();
  cout << "-- Platos Principal --\n";
  cout << "1) Milanesas napolitana \n";
  cout << "2) Arroz con Albondigas \n";
  cout << "3) Pasta a la bolognesa \n";
  cout << "4) Pollo al verdeo \n";
  cout << "5) Sorrentinos con 4 quesos \n";
  cout << "Seleccione un plato principal: ";
  cin >> opcion;
  }

  switch(opcion - 1){
    case MILANESAS:
      desc = "Milanesas a la napolitana";
      break;

    case ARROZ:
      desc = "Arroz con albondigas";
      break;

    case PASTAS:
      desc = "Pastas a la bolognesa";
      break;

    case POLLO:
      desc = "Pollo al verdeo";
      break;
    
    case SORRENTINOS:
      desc = "Sorrentinos con 4 salsas";
      break;
  }

  return desc;
}

string menuPostre(){
  clrscr();
  typedef enum { HELADO, FLAN, GELATINA, QUESO, TORTA } tPostre;
  string desc;
  int opcion = 99;

  // Evita el ingreso de valores que no existen.
  while( opcion == 0 || opcion > 5){
    clrscr();
    cout << "-- Postres --\n";
    cout << "1) Helado \n";
    cout << "2) Flan \n";
    cout << "3) Gelatina \n";
    cout << "4) Queso con dulce \n";
    cout << "5) Torta \n";
    cout << "Seleccione un postre: ";
    cin >> opcion;
  }

  switch (opcion - 1){

    case HELADO:
      desc = "Helado de chocolate y vainilla";
      break;

    case FLAN:
      desc = "Flan con dulce de leche";
      break;

    case GELATINA:
      desc = "Gelatina multi-sabor";
      break;

    case QUESO:
      desc = "Queso con dulce";
      break;

    case TORTA:
      desc = "Torta de chocolate";
      break;
  }

  return desc;
}