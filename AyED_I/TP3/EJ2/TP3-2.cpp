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
  cout << "2) Leer archivo (con interlineado)\n";
  cout << "3) Ver cantidad de palabras por linea \n";
  cout << "4) Buscar la palabra mas larga\n";
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
    
  case 3:
    mostrarCantPalabras();
    break;
    
  case 4:
    palabraMasLarga();
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
  archivo.open("frasesDeBjarne.txt");
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
    archivo.open("frasesDeBjarne.txt");
    
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

void mostrarCantPalabras(){
    ifstream archivo;
    string frase;

    archivo.open("frasesDeBjarne.txt");
    
  if (archivo.is_open())
  {
    while ( getline(archivo,frase) ) {

      cout << frase << " (" << contarPalabras(frase) << ")" << "\n";
    }
    archivo.close();
  } else cout << "No se pudo abrir el archivo o no existe..."; 

  archivo.close();
}

int contarPalabras(string str){
  int cantPalabras = 0;
  char anterior = ' ';

  for(unsigned int i = 0; i < str.length(); i++) {
      if ( str[i] != ' ' && anterior == ' ') cantPalabras++;

      anterior = str[i];
  }
  
  return cantPalabras;
}

string palabraMasLarga() {
  ifstream archivo;
  string frase, texto;

  // Leo todo el archivo:
  archivo.open("frasesDeBjarne.txt");
  if (archivo.is_open()) {
    while (!archivo.eof()) {
      getline(archivo, frase);
      texto.append(frase);
      texto.append(" ");
    }
  }
  archivo.close();

  int counter = 0;
  int max_word = -1;
  int total_caracteres = texto.length(); // Total de caracteres en el string.
  string max = " "; // Palabra con mas caracteres.
  
  //Recorre caracter por caracter.
  for (int i = 0; i < total_caracteres; i++) {
    //Busca el espacio que separa entre palabras.
    if (texto[i] != ' ') { 
      counter++;
    }

    if ( texto[i] == ' ' || i == total_caracteres - 1) {
      if (counter > max_word) {
        max_word = counter;
        if ( i == total_caracteres - 1)
          max = texto.substr( i + 1 - max_word, max_word); 
        else
          max = texto.substr( i - max_word, max_word);
      }
      counter = 0;
    }
  }
  cout << max << " (" << max_word << ")" << endl;
}