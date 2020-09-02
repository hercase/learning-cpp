
/* Escriba una estructura que almacene datos de una canción en formato MP3: Artista, Título, Duración (en segundos), Tamaño del fichero (en KB). Un programa debe pedir los datos de una canción al usuario, almacenarlos en dicha estructura y después mostrarlos en pantalla. Use los ejemplos visto en clase como base para resolver este práctico. Puede adjuntar la solución directamente cómo entrega de esta actividad. */

#include <iostream>
#include <string>

using namespace std;

void showTitle();
void songsProgram();

int main()
{
  songsProgram();
  return 0;
}

void showTitle()
{
  system("cls"); // Limpiar pantalla.
  cout << "----- LISTA DE CANCIONES CON STRUCT -----\n\n";
}

void pause(){
  cout << '\n' << '\n' << "Presione un tecla para volver al menu ...";
  cin.get();
  cin.ignore();
}

void songsProgram()
{
  int op;
  int arraySize;
  bool repeat = true;

  struct Date
  {
    int day;
    int month;
    int year;
  };

  struct Song
  {
    string title;
    string artist;
    Date release;
    float duration;
    int file_size;
  };

  showTitle();
  cout << "Cuantas canciones quiere cargar? ";
  cin >> arraySize;

  // Creo arreglo.
  Song songsList[arraySize];

  // Ingreso valores.
  for (int i = 0; i < arraySize; i++)
  {
    showTitle();
    cout << "CANCION " << i + 1 << " de " << arraySize << " - CARGAR DATOS\n";
    cout << "Titulo: ";
    getline(cin,songsList[i].title);
    cout << "Artista: ";
    getline(cin,songsList[i].artista);
    cout << "Fecha de lanzamiento \n";
    cout << "- Dia: ";
    cin >> songsList[i].release.day;
    cout << "- Mes: ";
    cin >> songsList[i].release.month;
    cout << "- Ano: ";
    cin >> songsList[i].release.year;
    cout << "Duracion (seg): ";
    cin >> songsList[i].duration;
    cout << "Tamano (KB): ";
    cin >> songsList[i].file_size;
  }

  do {
    showTitle();
    cout << "1. Lista simple de canciones\n";
    cout << "2. Lista detallada de canciones\n";
    cout << "0. Salir\n\n";
    cout << "Elija una opcion: ";
    cin >> op;

    switch (op) {
    case 1:
      for (int i = 0; i < arraySize; i++)
        {
          cout << "#" << i << " - " << songsList[i].title << " - " << songsList[i].artist << endl;
        }
      pause();
      break;

    case 2:
      for (int i = 0; i < arraySize; i++)
        {
          cout << "CANCION #" << i << endl;
          cout << "Titulo: " << songsList[i].title << endl;
          cout << "Artista: " << songsList[i].artist << endl;
          cout << "Release: " << songsList[i].release.day << "/" << songsList[i].release.month << "/" << songsList[i].release.year << endl;
          cout << "Duracion: " << songsList[i].duration << "s" << endl;
          cout << "Tamano: " << songsList[i].file_size << "KB" << endl;
          cout << "__________________________________________" << endl;
        }
        pause();
      break;

    default:
      repeat = false;
      break;
    }
  } while (repeat);
}