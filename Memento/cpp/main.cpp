#include <bits/stdc++.h>
#include "Caretaker.cpp"

using namespace std;

int main() {

     // Crear el objeto originador/creador
    Originator* creador = new Originator("Pedro", "Gil Mena");
    // Crear el objeto gestor/vigilante del Memento
    Caretaker* vigilante= new Caretaker();
    // Crear el Memento y asociarlo al objeto gestor
    vigilante->setMemento( creador->createMemento() );
    // Mostrar los datos del objeto
    cout<<"Nombre completo: [" + creador->getNombre() + " " + creador->getApellidos() + "]"<<endl;
    // Modificar los datos del objeto
    creador->setNombre("María");
    creador->setApellidos("Mora Miró");
    // Mostrar los datos del objeto
    cout<<"Nombre completo: [" + creador->getNombre() + " " + creador->getApellidos() + "]"<<endl;
    // Restaurar los datos del objeto
    creador->setMemento( vigilante->getMemento() );
    // Mostrar los datos del objeto
    cout<<"Nombre completo: [" + creador->getNombre() + " " + creador->getApellidos() + "]"<<endl;
    

    return 0;

}