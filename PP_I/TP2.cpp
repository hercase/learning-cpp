#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void clrscr();
void crearArchivo();
void leerArchivo();
void mostrarCantPalabras();
int contarPalabras(string);
string palabraMasLarga();

int main(){

  int op;

  do{
  clrscr();
  cout << "--- Frases de Bjarne ---\n";
  cout << "1) Crear nuevo archivo \n";
  cout << "2) Leer archivo\n";
  cout << "0) Salir\n";
  cout << "------------------------\n";
  cout << "Elija una opcion: ";
  cin >> op;
  } while (op > 4);

  switch (op) {
  case 1:
    crearArchivo();
    break;
    
  case 2:
    leerArchivo();
    break;
  }

  return 0;
}

void clrscr(){
    cout << "\033[2J\033[1;1H";
}

void crearArchivo(){
  
  ofstream archivo;
  string frase, centinela;
  archivo.open("frases.txt");
  centinela = "fin";

  do {
    clrscr();
    cout << "Ingrese una frase (fin) para terminar: ";
    getline(cin,frase);

    if (!frase.empty() && frase != centinela) {
      archivo << frase << endl;
    }

  } while (frase != centinela);

  archivo.close();
}

void leerArchivo(){
    ifstream archivo;
    string frase,str;
    archivo.open("frases.txt");
    
  clrscr();

  if (archivo.is_open())
  {
    while ( getline(archivo,frase) ) {
      cout << frase << "\n\n";
    }
    archivo.close();
  } else cout << "No se pudo abrir el archivo o no existe..."; 

  archivo.close();
}
