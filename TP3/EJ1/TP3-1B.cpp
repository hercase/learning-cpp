#include <iostream>
#include <string>

using namespace std;

// Limpiar Consola
void clrscr();
void leerdatosPersonales(int& dni, string& nombre);
string menuClases();
string menuAeropuerto(bool);
int main() {
  clrscr();
/* 
Una empresa de viaje nos pide que realicemos un programa para tomar reservas en avión, las mismas pueden ser clase Primera, Bussiness y económica, además del dni apellido y nombre, aeropuerto origen y destino:
El usuario introduce los datos personales, la clase y el origen – destino, mostrando el resultado x pantalla.
*/
  int dni;
  string clase, nombre, origen, destino;
  cout << "-- SISTEMA DE RESERVAS --\n";
  leerdatosPersonales(dni, nombre);
  clase = menuClases();
  origen = menuAeropuerto(true);
  destino = menuAeropuerto(false);

  clrscr();
  cout << "-------------- DATOS DEL VIAJE --------------";
  cout << "\nNOMBRE: " << nombre; 
  cout << "\nDNI: " << dni;
  cout << "\nCLASE: " << clase;
  cout << "\nORIGEN: " << origen;
  cout << "\nDESTINO: " << destino;
  cout << "\n---------------------------------------------";
  return 0;
}

void clrscr(){
  cout << "\033[2J\033[1;1H";
}

void leerdatosPersonales(int& dni, string& nombre){
  cout << "Ingrese su nombre completo: ";
  getline(cin,nombre);
  cout << "Ingrese DNI: "; 
  cin >> dni;
}

string menuClases(){ //selector de clase de vuelo
  typedef enum { first, business, economy } tClases;
  int op;
  string desc_clase;
  
  do {
    clrscr();
    cout << "Categorias de vuelo\n";
    cout << "1. Primera Clase \n";
    cout << "2. Clase Business \n";
    cout << "3. Clase Economica \n";
    cout << "Elija una clase: ";
    cin >> op;
  } while ( op == 0 || op > 3 );
  
  op -= 1;
  
  if( op == first) {
    desc_clase = "Primera Clase";
  } else if ( op == business) {
    desc_clase = "Clase Business";
  } else {
    desc_clase = "Clase Economica";
  }

  return desc_clase;
}


string menuAeropuerto(bool isOrigen){
  typedef enum { BHI, AEP, EPA, EZE, BRC, CTC, CRD } tAeropuerto;
  int op;
  string desc;
  //Código Aeropuerto
  clrscr();

  do {
  if ( isOrigen ){
  cout << "-- Aeropuerto de origen --\n";
  } else {
  cout << "-- Aeropuerto de destino --\n";
  }

  cout << "1. Bahia Blanca\n"; 
  cout << "2. Buenos Aires Aeroparque\n"; 
  cout << "3. Buenos Aires El Palomar\n"; 
  cout << "4. Buenos Aires Ezeiza\n"; 
  cout << "5. San Carlos de Bariloche\n"; 
  cout << "6. San Fernando del Valle de Catamarca\n"; 
  cout << "7. Comodoro Rivadavia\n";  
  cout << "Elija una opcion: ";
  cin >> op;
  clrscr(); 
  } while ( op == 0 || op > 7 );

  switch ( op -= 1 ){
    case BHI:
    desc = "Bahia Blanca";
    break;

    case AEP:
    desc = "Buenos Aires Aeroparque";
    break;

    case EPA:
    desc = "Buenos Aires El Palomar";
    break;

    case EZE:
    desc = "Buenos Aires Ezeiza";
    break;

    case BRC:
    desc = "San Carlos de Bariloche";
    break;

    case CTC:
    desc = "San Fernando del Valle de Catamarca";
    break;

    case CRD:
    desc = "Comodoro Rivadavia";
    break;
  }
  return desc;
}