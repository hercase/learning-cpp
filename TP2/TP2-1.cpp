#include <iostream>

using namespace std;

int main () {
    cout << "Unidad 2" << endl;
    cout << "Ejercicio 1." << endl;
    cout << "a. La suma de 45 + 34 es " << 45 + 34 << endl;
    cout << "b. La resta de 45 - 40 es " << 45 - 40 << endl;
    cout << "c. La division de 46 y 3 es " << 46 / 3 << endl;
    cout << "" << endl;
    cin.ignore();
    // clrscr
    cout << "\033[2J\033[1;1H";
    cout << "Unidad 2" << endl;
    cout << "Ejercicio 2." << endl;
    float largo, ancho, alto;
    cout << "a. Calcular un volumen de una habitacion." << endl;
    cout << "Ingrese el largo : ";
    cin >> largo;
    cout << "Ingrese el ancho : ";
    cin >> ancho;
    cout << "Ingrese el alto : ";
    cin >> alto;
    cout << "El volumen calculado es: " << largo * ancho * alto << endl;
    cout << "" << endl;
    double pi = 3.14, radio_base, altura, resultado;
    cout << "b. Calcular el volumen de un cono" << endl;
    cout << "Ingrese el radio de la base : ";
    cin >> radio_base;
    cout << "Ingrese la altura : ";
    cin >> altura;
    resultado = ( (pi * (radio_base * radio_base)) / altura ) / 3;
    cout << "El volumen calculado es: " << resultado << endl;
    return 0;
}