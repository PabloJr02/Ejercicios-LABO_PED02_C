#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);

int main(){
    Nodo *lista = NULL;
    int cantidad;

    cout<< "Cuantas pupusas desea ordenar: ";
    cin>>cantidad;
    insertarLista(lista, cantidad);

    cout<< "\tComo las quiere...?\n";
    cout<< "1. Arroz\n";
    cout<< "2. Maiz\n";
    cout<< "Opcion: ";
    cin>>cantidad;
    switch(cantidad){
        case 1: cout<< "Arroz"; break;
        case 2: cout<< "Maiz"; break;
    }insertarLista(lista, cantidad);

    cout<< "\tDe que las quiere...?\n";
    cout<< "1. FQ\n";
    cout<< "2. Q\n";
    cout<< "3. R\n";
    cout<< "Opcion: ";
    cin>>cantidad;
    switch(cantidad){
        case 1: cout<< "FQ"; break;
        case 2: cout<< "Q"; break;
        case 3: cout<< "R"; break;
    }insertarLista(lista, cantidad);

    cout<< "\tDesea una bebida con su pedido...?\n";
    cout<< "1. Si\n";
    cout<< "2. No\n";
    cout<< "Opcion: ";
    cin>>cantidad;
    switch(cantidad){
        case 1: cout<< "Si"; break;
        case 2: cout<< "No"; break;
    }insertarLista(lista, cantidad);

    mostrarLista(lista);

    getch();
    return 0;

}

void insertarLista(Nodo *&lista, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while((aux1 != NULL) && (aux1->dato < n)){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if(lista == aux1){
        lista = nuevo_nodo;
    }
    else{
        aux2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;

    cout<< "\tElemento "<<n<<" insertado correctamente\n";
}

void mostrarLista(Nodo *lista){
    Nodo *actual = new Nodo();
    actual = lista;

    while(actual != NULL){
        cout<<actual->dato<<" -> ";
        actual = actual->siguiente;
    }
}