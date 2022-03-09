#include <bits/stdc++.h>
#include "ClasesConcretas.cpp"

using namespace std;

int main() {

    // Crear el objeto agregado que contiene la lista (un vector en este ejemplo)
    AgregadoConcreto* agregado = new AgregadoConcreto();
    // Crear el objeto iterador para recorrer la lista
    Iterador* iterador = agregado->getIterator();
    // Mover una posición adelante y mostrar el elemento
    string obj = (string) iterador->primero();
    cout<<obj<<endl;
    // Mover dos posiciones adelante
    iterador->siguiente();
    iterador->siguiente(); 
    // Mostrar el elemento actual
    cout<< iterador->actual() << "\n";
    // Volver al principio
    iterador->primero();
    // Recorrer todo
    while( iterador->hayMas() == true ) {
        cout<< iterador->siguiente()<<endl;
    }

    return 0;

}