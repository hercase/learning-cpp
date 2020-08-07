#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
  int edad;
  char sexo;
  double altura;

  cout << "\033[33m" << "a. Programa que lea 3 datos, edad, sexo y altura.\n" << "\033[0m";
  cout << "Ingrese edad: ";
  cin >> edad;
  cout << "Ingrese sexo (M/F): ";
  cin >> sexo;
  cout << "Ingrese altura: ";
  cin >> altura;
  cout << "Edad: " << edad << " Sexo: " << sexo << " Altura: " << altura << endl;

  cout << "\033[33m" << "b. Calcular el promedio de notas.\n" << "\033[0m";
  float nota1, nota2, nota3, promedio;
  cout << "Ingrese la primera nota (30%): ";
  cin >> nota1;
  cout << "Ingrese la segunda nota (60%): ";  
  cin >> nota2;
  cout << "Ingrese la tercer nota (10%): ";
  cin >> nota3;
  promedio = ( nota1 * 0.3 + nota2 * 0.6 + nota3 * 0.1 );
  cout << "El promedio es " << promedio << " / 10." << endl;

  cout << "\033[33m" << "c. Calcular perimetros.\n" << "\033[0m";
  double cmedida, rw, rl, ta, tb, tc, opcion;
  cout << "Seleccione una figura para calcular su perimetro" << endl;
  cout << "1. Cuadrado \n";
  cout << "2. Rectangulo \n";
  cout << "3. Triangulo \n";
  cin >> opcion;

  if (opcion == 1) {
  // Cuadrado.
  cout << "Ingrese la medida de un lado de un cuadrado: ";
  cin >> cmedida;
  cout << "El perimetro calculado es " << cmedida * 4 << endl;
  } else if ( opcion == 2 ) {
  // Rectangulo
  cout << "Ingrese la longitud del rectangulo: ";
  cin >> rl;
  cout << "Ingrese el ancho del rectangulo: ";
  cin >> rw;
  cout << "El perimetro calculado es " << 2 * rl + 2 * rw << endl;
  } else {
  // Triangulo
  cout << "Ingrese el valor del lado A: ";
  cin >> ta;
  cout << "Ingrese el valor del lado B: ";
  cin >> tb;
  cout << "Ingrese el valor del lado C: ";
  cin >> tc;
  cout << "El perimetro calculado es " << ta + tb + tc << endl;
  }

  cout << "\033[33m" << "d. Calcular la ecuacion.\n" << "\033[0m";
  double y1,y2,x1,x2, m;
  cout << "m = y2-y1" << endl;
  cout << "    _____" << endl;
  cout << "    x2-x1" << endl;
  cout << "Ingrese el valor de y1: ";
  cin >> y1;
  cout << "Ingrese el valor de y2: ";
  cin >> y2;
  cout << "Ingrese el valor de x1: ";
  cin >> x1;
  cout << "Ingrese el valor de x2: ";
  cin >> x2;
  m = (y2 - y1) / ( x2 - x1);
  cout << "El valor de M es : " << m << endl;

  cout << "\033[33m" << "d. Calcular la ecuacion.\n" << "\033[0m";
  
  cout << "\033[33m" << "e. Calcular funcion lineal.\n" << "\033[0m";
  float ex1, ex2, ex3, ex4;
  cout << "Ingrese el valor de x1 : ";
  cin >> ex1;
  cout << "Ingrese el valor de x2 : ";
  cin >> ex2;
  cout << "Ingrese el valor de x3 : ";
  cin >> ex3;
  cout << "Ingrese el valor de x4 : ";
  cin >> ex4;
  cout << "y = 2*(" << ex1 << ")+1 : " << 2 * ex1 + 1 << endl; 
  cout << "y = 2*(" << ex2 << ")+1 : " << 2 * ex2 + 1 << endl; 
  cout << "y = 2*(" << ex3 << ")+1 : " << 2 * ex3 + 1 << endl; 
  cout << "y = 2*(" << ex4 << ")+1 : " << 2 * ex4 + 1 << endl; 

  return 0;
}