/* 
  Hacer un programa en C++ que lea dos números X e Y, luego hacer la diferencia X - Y; si la diferencia es menor o igual a 10, 
  entonces escribir todos los números comprendidos entre Y y X
*/

#include <iostream>
#include <cstdlib>

using namespace std;

void mostrarTitulo();
void mostrarNumerosEntreYyX();

int main (){
  mostrarNumerosEntreYyX();
  return 0;
}

void mostrarTitulo(){
  system("cls"); // Limpiar pantalla.
  cout << "----- Mostrar numeros entre X e Y -----\n"; 
}

void mostrarNumerosEntreYyX(){
  int X, Y, dif;

  do {
    mostrarTitulo();
    cout << "Ingrese dos valores con menos de 10 numeros entre si. ";
    cout << "\nX: ";
    cin >> X;
    cout << "Y: ";
    cin >> Y;
    dif = abs(X-Y); // Calculo valor absoluto.
  } while ( dif > 10);
    
    cout << "\nY | ";
    for ( int i = 0 ; i <= dif  ; i++){
      cout << ( (X > Y) ? Y++ : Y-- ) << " | "; // Evaluo si tengo que sumar o restarle valores a Y. 
    }
    cout << "X";
}  