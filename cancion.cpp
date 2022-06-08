
#include "bits/stdc++.h"

using namespace std;

struct cancion {

  string artista;
  string titulo;
  int duracion;
  int peso;

};

int n=2;
cancion *can1 = new cancion[n];
int i, elige;

void imprimir(){
  for(i=0;i<n;i++){
    cout << endl << "*******************";
    cout << endl << " Cancion " << i;
    cout << "\n+-----------------------------------+";
    cout << "\n+ Nombre de cancion\t: " << can1[i].titulo <<"\t\t+";
    cout << "\n+ Nombre artista\t: " << can1[i].artista << "\t\t+";
    cout << "\n+ Duracion\t= " << can1[i].duracion << "\t\t+";
    cout << "\n+ Peso\t= " << can1[i].peso << "\t\t+";
    cout << "\n+-----------------------------------+";
  }
}

int main(){
system("color b");

for(i=0;i<n;i++){

  cout << endl << " Ingrese nomrbe de artista : ";
  //cin >> can1[i].artista;0
  getline(cin,can1[i].artista);//Chapuza de martin para arreglar espacio

  cout << endl << " Ingrese titulo : ";
  cin >> can1[i].titulo;

  cout << endl << " Ingrese duracion en segundos = ";
  cin >> can1[i].duracion;

  cout << endl << "\n Ingrese peso en Kb = ";
  cin >> can1[i].peso;
}

cout  << endl << "Eliga opcion "
      << endl << "1.Mostrar todas las canciones "
      << endl << "2.Buscar cancion"
      << endl;
cin >> elige;

switch (elige) {
    case 1:
    imprimir();
  break;
    case 2:

  break;
}








}
