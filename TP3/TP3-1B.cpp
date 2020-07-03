#include <iostream>

using namespace std;

// Limpiar Consola
void clrscr();

/* 
Una empresa de viaje nos pide que realicemos un programa para tomar reservas en avión, las mismas pueden ser clase Primera, Bussiness y económica, además del dni apellido y nombre, aeropuerto origen y destino:
El usuario introduce los datos personales, la clase y el origen – destino, mostrando el resultado x pantalla.
*/

int main() {

/* 
Código Aeropuerto
1. Bahía Blanca-BHI
2. Buenos Aires Aeroparque-AEP
3. Buenos Aires El Palomar-EPA
4. Buenos Aires Ezeiza-EZE
5. San Carlos de Bariloche-BRC
6. San Fernando del Valle de Catamarca-CTC
7. Comodoro Rivadavia-CRD 
*/
  typedef enum { first, business, economy } tClases ;
  typedef enum { BHI, AEP, EPA, EZE, BRC, CTC, CRD }tAeropuerto;

  int op;

  cout << "Sistema de Reservas \n";
  cout << "Elija una clase: \n";
  cout << "1 - Primera Clase \n";
  cout << "2 - Clase Business \n";
  cout << "3 - Clase Economica \n";

  cin >> op;

  tClases clase = tClases(op - 1);

  if( clase == first) {
    cout << "Primera Clase";
  } else if ( clase == business) {
    cout << "Clase Business";
  } else {
    cout << "Clase Economica";
  }

  return 0;
}

void clrscr(){
  cout << "\033[2J\033[1;1H";
}