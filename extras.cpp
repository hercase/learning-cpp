/* 
  Hacer un programa en C++ que lea dos números X e Y, luego hacer la diferencia X - Y; si la diferencia es menor o igual a 10, 
  entonces escribir todos los números comprendidos entre Y y X
*/

#include <iostream>

using namespace std;

void multiplicationTable();
void rangeSwitch();
void codigoAscii();

int main(){
  int op;
  system("cls");
  cout  << "Que ejemplo quiere ver?"
        << "\n1. Tabla de multiplicacion"
        << "\n2. Switch con rango (dias)"
        << "\n3. Encontrar codigo ASCII"
        << "\nIngrese una opcion: ";
        cin >> op;
        system("cls");
        switch (op)
        {
        case 1:
          multiplicationTable();
          break;

        case 2:
          rangeSwitch();
          break;

        case 3:
          codigoAscii();
          break;
        }
  return 0;
}


// Tabla de multiplicacion
void multiplicationTable(){
    for (int i = 1; i <= 10; i++){
    for (int j = 1; j <= 10; j++){
      cout << i << " x " << j << " = " << i * j << endl;
    }
  }
}

// Switch con rangos.
void rangeSwitch(){
  int op;

  cout  << "Que dia es hoy?"
        << "\n1. Lunes"
        << "\n2. Martes"
        << "\n3. Miercoles"
        << "\n4. Jueves"
        << "\n5. Viernes"
        << "\n6. Sabado"
        << "\n7. Domingo"
        << "\n Elija una dia: ";
        cin >> op;

  switch (op){
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      cout << "\nNo es fin de semana! :( ";
      break;

    case 6:
    case 7:
      cout << "\nEs fin de semana! :) ";
      break;

    default:
      cout << "\nQue dia es ese? :@";
      break;
  }
}

void codigoAscii(){
  char c;
  cout << "Ingrese un caracter: ";
  cin >> c;
  cout << "El codigo ASCII de " << c << " es " << int(c);
}