#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
// Añade paquete de idiomas
#include <locale.h>
#include <windows.h>

using namespace std;

string colorizeTitle(string);
void pause();

// Funciones de ejercicio. 
float mult(float, float);
float al_cuadrado(float);

int main(){

  cout << colorizeTitle("Ejercicio 1.");
  cout << "Escriba una funcion llamada mult() que acepte dos numeros en punto flotante como parametros, multiplique estos dos numeros y despliegue el resultado. \n";
  float ej1_value1, ej1_value2;
  cout << "Ingrese el primer numero: ";
  cin >> ej1_value1;
  cout << "Ingrese el segundo numero: ";
  cin >> ej1_value2;
  cout << "El resultado es : " << mult(ej1_value1,ej1_value2);

  pause();

  cout << colorizeTitle("Ejercicio 2.");
  cout << "Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el resultado. La funcion debera ser capaz de elevar al cuadrado numeros flotantes. \n";
  float ej2_value1;
  cout << "Ingrese un numero: ";
  cin >> ej2_value1;
  cout << "El cuadrado de " << ej2_value1 << " es " << al_cuadrado(ej2_value1);

  pause();

  cout << colorizeTitle("Ejercicio 3.");
  cout << "Escriba una funcion nombrada funpot() que eleve un numero entero que se le transmita a una potencia en numero entero positivo y despliegue el resultado. El numero entero positivo debera ser el segundo valor transmitido a la funcion.  \n";

  pause();

/* 4. Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier número
introducido por el usuario. Por ejemplo, si se introduce el número 256.879, debería
desplegarse el número 0.879. */

/* 5. Escriba una plantilla de función llamada despliegue() que despliegue el valor del
argumento único que se le transmite cuando es invocada la función. */

/* 6. Escribir un función que Intercambie el valor de 2 variables. */

/* 7. Escriba una función nombrada cambio() que tenga un parámetro en número entero en
pesos y devuelva le valor en dólares. */

/* 8. Escriba una función nombrada tiempo() que tenga un parámetro en número entero
llamado totalSeg y tres parámetros enteros nombrados horas, min y seg. La función es
convertir el número de segundos transmitido en un número equivalente de horas,
minutos y segundos. */

/* 9. Escribir un Programa en C++ que duplique el valor dos números con una función
Duplicar(int a, int b), pero a y b están definidas en el código…
Mostrar los valores de a y b, antes y después del llamado de la Función.
{Nota: EL presente ejercicio es para “Inducir” al alcance de las Variables y el pasaje de
Parámetros, dado que como vimos “hasta ahora” solo le pasamos un valor y no la variable
en si. Comprenda y Conceptualice el Ejercicio, escriba debajo del Código un Texto y
relaciónelo con la pregunta 11 (opcional 12). */

  return 0;
}

float mult(float num1, float num2) {
  float aux;
  aux = num1 * num2;
  return aux;
}

float al_cuadrado(float num) {
  return num * num;
}

// Funcion para darle color a los titulos.
string colorizeTitle(string title){
  string c_title;
  c_title = "\033[33m" + title + "\033[0m \n";
  return c_title;
}

void pause(){
  cout << '\n' << '\n' << "Presione un tecla para continuar...";
  cin.get();
  cin.ignore();
  // Limpiar consola.
  cout << "\033[2J\033[1;1H";
}