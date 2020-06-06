#include <iostream>
#include <ctime>
#include <cmath> 

using namespace std;

int main(){
    time_t t = time(0);
    tm* now = localtime(&t);
    
    int diaActual = now->tm_mday,
        mesActual = now->tm_mon + 1, 
        anioActual = now->tm_year + 1900, 
        dia,mes,anio;

    cout << "\033[33m" << "a. Realizar un programa que pida la fecha de nacimiento y nos de la edad" << "\033[0m" << endl;
    cout << "Ingrese su fecha de nacimiento" << endl;
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Anio: ";
    cin >> anio;

    if ( mesActual > mes){
        cout << "Su edad es " << anioActual - anio << endl;
    } else if (diaActual >= dia){
        cout << "Su edad es " << anioActual - anio << endl;
    } 
    else {
        cout << "Su edad es " << (anioActual - anio) -1 << endl;
    }

    cout << "\033[33m" << "b. Realizar un programa que pida 3 datos y nos devuelva el promedio" << "\033[0m" << endl;
    float b1, b2, b3, b_resultado;
    cout << "Ingrese el valor 1: ";
    cin >> b1;
    cout << "Ingrese el valor 2: ";
    cin >> b2;
    cout << "Ingrese el valor 3: ";
    cin >> b3;
    b_resultado = ( b1 + b2 + b3 ) / 3;
    cout << "El promedio es " << floor(b_resultado * 100) / 100 << endl;

    cout << "\033[33m" << "c. Realizar un programa que pida 4 datos y devuelva el producto de ellos" << "\033[0m" << endl;
    float c1, c2, c3, c4;
    cout << "Ingrese el valor 1: ";
    cin >> c1 ;
    cout << "Ingrese el valor 2: ";
    cin >> c2;
    cout << "Ingrese el valor 3: ";
    cin >> c3;
    cout << "Ingrese el valor 4: ";
    cin >> c4;
    cout << "El producto es " << c1 * c2 * c3 * c4 << endl;

    cout << "\033[31m" << "El ejercicio D y E ya fueron resueltos en el TP anterior.." << "\033[0m" << endl;

    cout << "\033[33m" << "f. Convertir de Gradios " << "\xF8" <<  "F a " << "\xF8" << "C" << "\033[0m" << endl;
    float grados_f = 0, grados_c = 0;
    cout << "Ingrese cantidad de grados " << "\xF8" << "F: ";
    cin >> grados_f;
    grados_c = (grados_f - 32) * 5 / 9;
    cout << "Equivale a " << floor(grados_c * 100) / 100  << "\xF8" << "C" << endl;
    
    cout << "\033[33m" << "g. Ingrese un tiempo en segundos: " << "\033[0m";
    int num, hor ,minu ,seg;
    cin >> num;
    hor = (num / 3600);
    minu = ((num - hor * 3600) / 60);
    seg = num - (hor * 3600 + minu * 60);
    cout << "Equivale a " << hor <<"h "<<minu<<"m "<<seg<<"s";

    return 0;
}