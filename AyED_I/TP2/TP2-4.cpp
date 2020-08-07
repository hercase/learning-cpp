#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string colorizeTitle(string);
void pause();

int main(){
// Clear Screen
cout << "\033[2J\033[1;1H";

/* Hacer un programa en C++ para un bazar que tiene una promo de descuento para vender
al mayor, esta dependerá del número de Productos que se compren. Si son más de diez, se
les dará un 12% de descuento sobre el total de la compra; si el número de productos es
mayor de veinte pero menor de treinta, se le otorga un 25% de descuento; y si son más
treinta productos de le otorgará un 40% de descuento. El precio de cada producto es de
$80. */

  cout << colorizeTitle("Ejercicio 1.");
  double total, cantidad;
  cout << "Por favor, ingrese la cantidad de productos que desea comprar: ";
  cin >> cantidad;
  total = 80 * cantidad; 

  if ( cantidad >= 30 ) {
      cout  << "Cantidad de productos: " << cantidad 
            << ", Total: $" << total
            << ", Total c/ 40% descuento : " << total - ( total * 40 / 100) << endl;
  } else if ( cantidad >= 20 && cantidad < 30 ) {
      cout  << "Cantidad de productos: " << cantidad 
            << ", Total: $" << total
            << ", Total c/ 25% descuento : " << total - ( total * 25 / 100) << endl;
  } else if( cantidad >= 10 ) { 
      cout  << "Cantidad de productos: " << cantidad 
            << ", Total: $" << total
            << ", Total c/ 12% descuento : " << total - ( total * 12 / 100) << endl;
    } else {
      cout  << "Cantidad de productos: " << cantidad 
            << ", Total: $" << total
            << endl;
  }

pause();

/* Hacer un programa en C++ para ayudar a un trabajador a saber cuál será su salario
semanal, se sabe que si trabaja 40 horas o menos, se le pagará $200 por hora, pero si
trabaja más de 40 horas entonces las horas extras se le pagarán a $250 por hora. */

  cout << colorizeTitle("Ejercicio 2.");
  float horas, extras;
  cout << "Ingrese la cantidad de horas trabajadas: ";
  cin >> horas;
  if ( horas > 40) {
    extras = ( horas - 40 ) * 250;
    cout << "Horas normales: $" << 40 * 200 << endl; 
    cout << "Horas extras: $" << extras << endl; 
    cout << "Salario: $" << 40 * 200 + extras << endl;
  } else {
    cout << "Salario: $" << horas * 200 << endl;
  }

pause();

/* Hacer un programa en C++ para determinar el promedio de tres notas y determinar si el
estudiante aprobó o no. */

  cout << colorizeTitle("Ejercicio 3.");
  float n1, n2, n3, promedio;
  cout << "Ingrese nota 1: ";
  cin >> n1;
  cout << "Ingrese nota 2: ";
  cin >> n2;
  cout << "Ingrese nota 3: ";
  cin >> n3;
  promedio = ( n1 + n2 + n3 ) / 3;
  cout << "Su promedio es " << fixed << setprecision(2) << promedio;
  if ( promedio >= 4 ) {
    cout << "\033[32m" << " (Aprobado)" << "\033[0m \n" << endl;
  } else {
    cout << "\033[31m" << " (Desaprobado)" << "\033[0m \n" << endl;
  }

pause();

/* Hacer un programa en C++ que pida números hasta que el usuario introduzca 99, luego
mostrar los números y el promedio. */

  cout << colorizeTitle("Ejercicio 4.");
  int numero = 0, suma = 0, count = 0, i = 0, numeros[50];
  double promedio_ej4;
    cout << "Ingrese numeros para calcular un promedio, para detener el bucle ingrese 99.\n";
    while (numero != 99) { 
          cout << "Ingrese un numero: "; cin >> numero;
          if (numero != 99) {
                  numeros[count] = numero;
                  suma += numero;
                  count++;
          }
    }
    cout << "\nLa cantidad de numeros ingresados fueron: " << count;
    cout << "\nLos numeros ingresados fueron: ";
    while (i < count) { 
      cout << numeros[i] << " ";
      i++;
    }
    promedio_ej4 = suma / count; 
    cout << "\nLa suma de todos los numeros es " << suma << " y el promedio es " << promedio_ej4 << endl;

pause();

/* Hacer un programa en C++ que pida un número y calcule la suma desde 1 hasta ese
número , en incrementos de uno. */ 

  cout << colorizeTitle("Ejercicio 5.");
  int number, index, counter;
  cout << "Ingrese un numero para sumar todos los numeros menores a este: ";
  cin >> number;

  for ( index = 0; index < number - 1; index++){
    cout << index + 1  << ", ";
  }
  cout << number << endl;

pause();

/* Hacer un programa en C++ para Calcular la suma de los números pares e impares
comprendidos entre 1 y n (n lo introduce el usuario). */

  cout << colorizeTitle("Ejercicio 6.");
  int num_6, index_6, pares = 0, impares = 0;
  cout << "Ingrese un numero para sumar los numeros pares e impares menores a este: ";
  cin >> num_6;

  for ( index_6 = 0; index_6 < num_6 + 1 ; index_6++){
    if ( index_6 % 2 == 0 ) {
      pares = pares + index_6;
    } else {
      impares = impares + index_6;
    }
  }
  cout << " Suma de pares = " << pares;
  cout << " Suma de impares = " << impares << endl;

pause();

/* Hacer un programa en C++ que pida dos números enteros. El programa pedirá de nuevo el
segundo número mientras no sea mayor que el primero. El programa terminará
escribiendo los dos números. */

  cout << colorizeTitle("Ejercicio 7.");
  int numero_1 = 0, numero_2 = 0;
  cout << "Introduzca un numero y luego un numero que sea mayor a este.";
  cout << "\nNumero 1: ";
  cin >> numero_1;
  while( numero_1 + 1 > numero_2){
  cout << "Numero 2: ";
  cin >> numero_2;
  }
  cout << "\nLos numeros ingresados son " << numero_1 << " y " << numero_2 << endl;

pause();

/* Hacer un programa en C++ que pida números mientras no se escriba un número negativo.
El programa terminará escribiendo la suma de los números introducidos. */

  cout << colorizeTitle("Ejercicio 8.");
  int aux = 0 , total_ej8 = 0;
  cout << "Ingrese numeros para sumar (ingrese un numero negativo para detener)";
  cout << "\nPrimer numero: ";
  cin >> total_ej8;
  while( aux >= 0){
    cout << "Nuevo numero: ";
    cin >> aux;
    if (aux >= 0){
      total_ej8 = total_ej8 + aux;
    }
  }
  cout << "Total: " << total_ej8 << endl;
  return 0;
}

// Funcion para darle color a los titulos.
string colorizeTitle(string title){
  string c_title;
  c_title = "\033[33m" + title + "\033[0m \n";
  return c_title;
}

void pause(){
  cout << '\n' << "Presione un tecla para continuar...";
  cin.get();
  cin.ignore();
  // Limpiar consola.
  cout << "\033[2J\033[1;1H";
}