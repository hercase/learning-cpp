/* 
  Hacer un programa en C++ que lea dos números X e Y, luego hacer la diferencia X - Y; si la diferencia es menor o igual a 10, 
  entonces escribir todos los números comprendidos entre Y y X
*/

#include <iostream>

using namespace std;

void ejemploTabla();
void ejemploSwitch();

int main(){
  int op;
  cout  << "¿Que ejemplo quiere ver?"
        << "\n1. Tabla de multiplicacion"
        << "\n2. Switch con rango"
        << "\nIngrese una opcion: ";
        cin >> op;

        switch (op)
        {
        case 1:
          ejemploTabla();
          break;

        case 2:
          ejemploSwitch();
          break;
        }
  return 0;
}


// Tabla de multiplicacion
void ejemploTabla(){
    for (int i = 1; i <= 10; i++){
    for (int j = 1; j <= 10; j++){
      cout << i << " x " << j << " = " << i * j << endl;
    }
  }
}

// Switch con rangos.
void ejemploSwitch(){
  typedef enum { lunes, martes, miercoles, jueves, viernes, sabado, domingo } tDia;
  
  tDia dia = sabado;

  switch (dia + 1){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      cout << "No es fin de semana! :( ";
      break;

    case 6:
    case 7:
      cout << "Es fin de semana! :) ";
      break;

    default:
      cout << "¿Que dia es ese?";
      break;
  }
}