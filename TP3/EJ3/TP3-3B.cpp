
/* 
  Hacer un programa en C++ que ayude a una empresa a incrementar los salarios de los trabajadores de la siguiente manera:

  Tipo de salario %
  De 0 a $9 000 20%
  De $9 000 a $15 000 10%
  De $15 000 a $20 000 5%
  Más de $20 000 3%
*/

#include <iostream>

using namespace std;

void mostrarAumentoSalario();
float aumentarSalario(float salario);

int main (){

  mostrarAumentoSalario();
  
  return 0;
}

void mostrarAumentoSalario(){
  float salario, nuevo_salario;

  system ("cls"); // Limpiar pantalla.
  cout << "----- Calcular aumento de salario -----\n";
  cout << "Ingrese su salario : $";

  while (!(cin >> salario))
  {
      cout << "ERROR - Debe ingresar un salario valido: $";
      cin.clear();
      cin.ignore(132, '\n');
  }

  nuevo_salario = aumentarSalario(salario);
  cout  << "\n Salario :   $ " << salario
        << "\n Aumento : + $ " << nuevo_salario - salario
        << "\n   Total :   $ " << nuevo_salario << endl;

  cout << "\nPresione una tecla para salir ...";
  cin.get();
  cin.ignore();
}

float aumentarSalario(float salario){
  float nuevo_salario;

  if ( salario < 9000 ) nuevo_salario = salario * 1.20;
  if ( salario >= 9000 && salario < 15000 ) nuevo_salario = salario * 1.10;
  if ( salario >= 15000 && salario < 20000 ) nuevo_salario = salario * 1.05;
  if ( salario >= 20000 ) nuevo_salario = salario * 1.03;

  return nuevo_salario;
}

