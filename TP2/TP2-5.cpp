#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cmath>

//Para usar colores si es la terminal de linux.
#ifdef __unix__                    /* __unix__ is usually defined by compilers targeting Unix systems */
  #define OS_Windows 0
#elif defined(_WIN32) || defined(WIN32)     /* _Win32 is usually defined by compilers targeting 32 or   64 bit Windows systems */
  #define OS_Windows 1
#endif

//Colores
#define YELLOW "\033[33m"      /* Yellow */
#define RESET "\033[0m"

using namespace std;

// Limpia pantalla.
void clrscr();
// Frena la ejecucion entre cada ejercicio. 
void pause();

// Funciones de ejercicio. 
float mult(float, float);
float al_cuadrado(float);
int funpot(int, int);
double fractionPart(double);
// Plantilla
template <class TIPOD>
void despliegue(TIPOD num);
void intercambio(int&,int&);
void cambio(float);
void tiempo(int,int&,int&,int&);
void duplicar(int&, int&);

int main(){
  clrscr();

  cout << "Ejercicio 1. \n";
  cout << "Escriba una funcion llamada mult() que acepte dos numeros en punto flotante como parametros, multiplique estos dos numeros y despliegue el resultado. \n";
  float ej1_value1, ej1_value2;
  cout << "Ingrese el primer numero: ";
  cin >> ej1_value1;
  cout << "Ingrese el segundo numero: ";
  cin >> ej1_value2;
  cout << "El resultado es : " << mult(ej1_value1,ej1_value2);

  pause();

  cout << "Ejercicio 2. \n";
  cout << "Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el resultado. La funcion debera ser capaz de elevar al cuadrado numeros flotantes. \n";
  float ej2_value1;
  cout << "Ingrese un numero: ";
  cin >> ej2_value1;
  cout << "El cuadrado de " << ej2_value1 << " es " << al_cuadrado(ej2_value1);

  pause();

  cout << "Ejercicio 3. \n";
  cout << "Escriba una funcion nombrada funpot() que eleve un numero entero que se le transmita a una potencia en numero entero positivo y despliegue el resultado. El numero entero positivo debera ser el segundo valor transmitido a la funcion.  \n";
  int ej3_value1, ej3_value2;
  cout << "Numero: ";
  cin >> ej3_value1;
  cout << "Exponente: ";
  cin >> ej3_value2;
  cout << ej3_value1 << "^" << ej3_value2 << " = " << funpot(ej3_value1, ej3_value2); 

  pause();

  /* Pruebo printf(); */
  printf("Ejercicio 4. \n");
  printf("Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier numero introducido por el usuario. \n");
  /* Por ejemplo, si se introduce el numero 256.879, debería desplegarse el número 0.879. */
  double ej4_value;
  printf("Numero: ");
  cin >> ej4_value;
  printf("La parte fraccionaria de %.4f es %.4f",ej4_value, fractionPart(ej4_value)); 

  pause();

  cout << "Ejercicio 5. \n";
  cout << "Escriba una plantilla de funcion llamada despliegue() que despliegue el valor del argumento unico que se le transmite cuando es invocada la funcion. \n";
  float ej5_value;
  cout << "Ingrese un valor: ";
  cin >> ej5_value;
  despliegue(ej5_value);

  pause();

  cout << "Ejercicio 6. \n";
  cout << "Escribir una funcion que intercambie el valor de 2 variables. \n";
  int v1, v2;
  cout << "Introduzca el valor de la variable 1: ";
  cin >> v1;
  cout << "Introduzca el valor de la variable 2: ";
  cin >> v2;
  intercambio(v1, v2);
  cout << "Ahora, el valor de la variable 1 es: " << v1;
  cout << "\nAhora, el valor de la variable 2 es: " << v2;

  pause();

  cout << "Ejercicio 7. \n";
  cout << "Escriba una funcion nombrada cambio() que tenga un parametro en numero entero en pesos y devuelva le valor en dolares. \n";
  float pesos;
  cout << "Ingrese un valor en pesos : $";
  cin >> pesos;
  cambio(pesos);

  pause();

  cout << "Ejercicio 8. \n";
  cout << "Escriba una funcion nombrada tiempo() que tenga un parametro en numero entero llamado totalSeg y tres parametros enteros nombrados horas, min y seg. \nLa funcion es convertir el numero de segundos transmitido en un numero equivalente de horas, minutos y segundos. \n";
  int TotalSeg, horas, min, seg;
  cout << "Digite la cantidad de segundos: ";
  cin >> TotalSeg;
  tiempo(TotalSeg, horas, min, seg);
  cout << "Tiempo equivalente a " << horas << " horas, " << min << " minutos, y " << seg << " segundos.";
  
  pause();

  cout << "Ejercicio 9. \n";
  cout << "Escribir un programa que duplique el valor dos numeros con una funcion Duplicar(int a, int b), pero a y b estan definidas en el codigo.. \nMostrar los valores de a y b, antes y despues del llamado de la Funcion \n";
  /* Nota: EL presente ejercicio es para “Inducir” al alcance de las Variables y el pasaje de Parámetros, dado que como vimos “hasta ahora” solo le pasamos un valor y no la variable en si. Comprenda y Conceptualice el Ejercicio, escriba debajo del Código un Texto y relaciónelo con la pregunta 11 (opcional 12). */
  int a,b;
  cout << "Ingrese el valor de A: ";
  cin >> a;
  cout << "Ingrese el valor de B: ";
  cin >> b;
  cout << "Los valores son A: " << a << " y B: " << b;
  duplicar(a,b);
  cout << "\ny despues de ejecutar la funcion duplicar() \nLos valores son A: " << a << " y B: " << b;

  return 0;
}

// Limpiar pantalla.
void clrscr(){
  cout << "\033[2J\033[1;1H";
}

float mult(float num1, float num2) {
  float aux;
  aux = num1 * num2;
  return aux;
}

float al_cuadrado(float num) {
  return num * num;
}

int funpot(int num, int exp) {
  return pow(num, exp);
}

double fractionPart(double num) {
  double parteDecimal, parteEntera;
  parteDecimal = modf(num, &parteEntera);
  return parteDecimal;
}

//Plantilla
template <class TIPOD>
void despliegue(TIPOD num) {
  cout << "El argumento es " << num;
}

void intercambio(int& v1,int& v2){
    int aux;
    aux = v1;
    v1 = v2;
    v2 = aux;
}

void cambio(float pesos) {
  float dolar = 74.19, aux, imp_pais;
  aux = pesos / dolar;
  cout << "Equivale a " << aux << " USD.";
}

void tiempo(int TotalSeg, int& horas, int& min, int& seg) {
  horas = TotalSeg / 3600;
  TotalSeg %= 3600;
  min = TotalSeg / 60;
  seg = TotalSeg % 60;
}

void duplicar(int& a, int& b){
  a *= 2;
  b *= 2;  
}

void pause(){
  cout << '\n' << '\n' << "Presione un tecla para continuar...";
  cin.get();
  cin.ignore();
  clrscr();
}