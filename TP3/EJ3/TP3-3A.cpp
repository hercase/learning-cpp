/* 
  Hacer un programa en C++ que convierta centímetros a pulgadas
  Celsius a Farenheit y libras a kilogramos 
*/

#include <iostream>

using namespace std;

int mostrarMenu();
void mostrarTitulo();
void pause();
void convertirCentimetrosYPulgadas();
void convertirCelsiusYFahrenheit();
void convertirKilogramosYLibras();

int main (){
  int op;
  bool repeat = true;
  do{
    op = mostrarMenu();

    switch (op) {
      case 1:
        convertirCentimetrosYPulgadas();
        break;
      
      case 2:
        convertirCelsiusYFahrenheit();
        break;

      case 3:
        convertirKilogramosYLibras();
        break;

      case 0:
        repeat = false;
        break;
      }

  } while (repeat);

  return 0;
}

// Para cambiarle al titulo a todo el programa.
void mostrarTitulo(){
  cout  << "----- Convertidor -----\n";
}

void pause(){
  cout << '\n' << '\n' << "Presione un tecla para volver al menu ...";
  cin.get();
  cin.ignore();
}

int mostrarMenu(){
  int op;
  system ("cls"); // Limpiar pantalla.
  mostrarTitulo();
  cout  << "1. Centimetros / Pulgadas"
        << "\n2. Celsius / Fahrenheit" 
        << "\n3. Kilogramos / Libras" 
        << "\n0. Salir"
        << "\n\nElija una opcion: ";
  cin >> op;
  return op;
}

void convertirCentimetrosYPulgadas(){
  float cm, in;
  int op;
  bool repeat = true;
  do {
    system ("cls"); 
    mostrarTitulo();
    cout  << "1. Centimetros a Pulgadas"
          << "\n2. Pulgadas a Centimetros"
          << "\n0. Volver al menu"
          << "\n\nElija una opcion: ";
    cin >> op;

    switch (op)
    {
    case 1:
      system ("cls"); 
      mostrarTitulo();
      cout  << "Ingrese la cantidad de centimetros a convertir : ";
      cin >> cm;
      in = cm / 2.54;
      cout << endl << cm << " cm = " << in << " in.";
      repeat = false;
      break;
    
    case 2:
      system ("cls"); 
      mostrarTitulo();
      cout  << "Ingrese la cantidad de pulgadas a convertir : ";
      cin >> in;
      cm = in * 2.54;
      cout << endl << in << " in = " << cm << " cm.";
      repeat = false;
      break;
    
    case 0:
      repeat = false;
      break;
    }

  } while (repeat);
  
  if (op != 0) pause();
}

void convertirCelsiusYFahrenheit(){
  float f, c;
  int op;
  bool repeat = true;
  do {
    system ("cls"); 
    mostrarTitulo();
    cout  << "1. Celsius a Fahrenheit"
          << "\n2. Fahrenheit a Celsius"
          << "\n0. Volver al menu"
          << "\n\nElija una opcion: ";
    cin >> op;

    switch (op)
    {
    case 1:
      system ("cls"); 
      mostrarTitulo();
      cout  << "Ingrese la cantidad de grados Celsius : ";
      cin >> c;
      f = (c * 9/5) + 32;
      cout << endl << c << " C\370 = " << f << " F\370";
      repeat = false;
      break;
    
    case 2:
      system ("cls"); 
      mostrarTitulo();
      cout  << "Ingrese la cantidad de grados Fahrenheit : ";
      cin >> f;
      c = (f - 32) * 5/9;
      cout << endl << f << " F\370 = " << c << " C\370";
      repeat = false;
      break;
    
    case 0:
      repeat = false;
      break;
    }

  } while (repeat);

  if (op != 0) pause();
}

void convertirKilogramosYLibras(){
  float kg, lb;
  int op;
  bool repeat = true;
  do {
    system ("cls"); 
    mostrarTitulo();
    cout  << "1. Kilogramos a Libras"
          << "\n2. Libras a Kilogramos"
          << "\n0. Volver al menu"
          << "\n\nElija una opcion: ";
    cin >> op;

    switch (op)
    {
    case 1:
      system ("cls"); 
      mostrarTitulo();
      cout  << "Ingrese la cantidad de Kilogramos: ";
      cin >> kg;
      lb = kg * 2.20462;
      cout << endl << kg << " kg = " << lb << " lb";
      repeat = false;
      break;
    
    case 2:
      system ("cls"); 
      mostrarTitulo();
      cout  << "Ingrese la cantidad de Libras: ";
      cin >> lb;
      kg = lb / 2.20462;
      cout << endl << lb << " lb = " << kg << " kg";
      repeat = false;
      break;
    
    case 0:
      repeat = false;
      break;
    }

  } while (repeat);

  if (op != 0) pause();
}
