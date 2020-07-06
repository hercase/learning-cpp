#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void clrscr();
int codProveedor();
string rSocial();
string fechaActual();
string fechaEntrega(int dias);
void pFrutas(int&,int&,int&,int&,int&,int&);

int main (){
  clrscr();

  /* Un Verduleria nos pide que armemos el pedido para el mayorista para lo cual deberemos pedir al usuario el código proveedor, razón social, fecha de solicitud y fecha de entrega. Las frutas estarán enumeradas (tomar solo 6 a modo de ejemplo), mostrando los datos x pantalla.*/

  string social, fecha_actual;
  int proveedor, entrega; 
  int bananas = 0,
      manzanas = 0,
      duraznos = 0,
      tomates = 0,
      sandias = 0,
      peras = 0;
      
// Para almezaner los valores y despues mostrarlos, primero guardo los resultados de las funciones en sus variables.
proveedor = codProveedor();
social = rSocial();
pFrutas(bananas, manzanas, duraznos, tomates, sandias, peras);

// Para pasar la cantidad de dias a la funcion fechaEntrega()
clrscr();
cout << "En cuantos dias quiere recibir el pedido?: ";
cin >> entrega;

// Dibujo los datos del pedido.
clrscr();
cout << "------------------------ PEDIDO ------------------------" << endl;
cout << "Razon Social: " << social << endl;
cout << "Proveedor #" << proveedor << endl;
cout << "Fecha de solicitud: " << fechaActual() << " | " << " Fecha de entrega: " << fechaEntrega(entrega) << endl;
cout << "---------------------- PRODUCTOS -----------------------" << endl;
if ( bananas > 0 ) cout <<  "- CAJONES DE BANANA x" << bananas << endl;
if ( manzanas > 0 ) cout << "- CAJONES DE MANZANAS x" << manzanas << endl;
if ( duraznos > 0 ) cout << "- CAJONES DE DURAZNOS x" << duraznos << endl;
if ( tomates > 0 ) cout <<  "- CAJONES DE TOMATES x" << tomates << endl;
if ( sandias > 0 ) cout <<  "- CAJONES DE SANDIAS x" << sandias << endl;
if ( peras > 0 ) cout <<    "- CAJONES DE PERAS x" << peras << endl;
cout << "--------------------------------------------------------" << endl; 

return 0;
}

void clrscr(){
    cout << "\033[2J\033[1;1H";
}

int codProveedor(){
    int n_proveedor;
    cout << "Ingrese su numero de proveedor: ";
    cin >> n_proveedor;
  return n_proveedor;
}

string rSocial(){
    string razon_social;
    cout << "Ingrese su razon social: ";
    cin.ignore();
    getline(cin,razon_social);
  return razon_social;
}

void pFrutas(int& bananas,int& manzanas,int& duraznos,int& tomates,int& sandias,int& peras){
  typedef enum { Bananas, Manzanas, Duraznos, Tomates, Sandias, Peras } tFrutas;
  int op;

  do {
    clrscr();
    cout << "Ingrese la cantidad de cajones de fruta que desea pedir\n";
    cout << "1) Bananas x" << bananas << endl;
    cout << "2) Manzanas x" << manzanas << endl;
    cout << "3) Duraznos x" << duraznos << endl;
    cout << "4) Tomates x" << tomates  << endl;
    cout << "5) Sandias x" << sandias << endl;
    cout << "6) Peras x"<< peras << endl;
    cout << "-------------------------" << endl;
    cout << "0) Finalizar\n";
    cin >> op;

    switch( op - 1 ){
      case Bananas:
        bananas += 1;
      break;
      case Manzanas:
        manzanas += 1;
      break;
      case Duraznos:
        duraznos += 1;
        break;
      case Tomates:
        tomates += 1;
      break;
      case Sandias:
        sandias += 1;
      break;
      case Peras:
        peras +=1;
      break;
    }
  } while ( op != 0 );
}

//Fecha actual , al momento de ejecucion.
string fechaActual(){ 
  time_t rawtime;
  struct tm * timeinfo;
  char buffer[80];
  time (&rawtime);
  timeinfo = localtime(&rawtime);
  strftime(buffer,sizeof(buffer),"%d-%m",timeinfo);
  string str(buffer);
  return str;
}

//Fecha de entrega en dias, despues de la fecha actual.
string fechaEntrega(int dias){
  time_t rawtime;
  struct tm * timeinfo;
  char buffer[80];
  time (&rawtime);
  rawtime += 60 * 60 * 24 * dias;
  timeinfo = localtime(&rawtime);
  strftime(buffer,sizeof(buffer),"%d-%m",timeinfo);
  string str(buffer);
  return str;
}