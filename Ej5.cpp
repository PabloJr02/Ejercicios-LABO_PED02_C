#include <iostream>
using namespace::std;

struct nodo{
    int dato;
    nodo* siguiente;
} *primero, *ultimo;

void insertarNodo();
void buscarNodo();
void eliminarNodo();
void desplegarLista();

int main(){
    int opcion_menu=0;
    do{
        cout<< endl << "1) Introducir el ID del paciente." << endl;
        cout<< "2) Introducir el nombre del dueño." << endl;
        cout<< "3) Introducir raza del paciente." << endl;
        cout<< "4) Introducir peso del paciente." << endl;
        cout<< "5) Introducir edad del paciente." << endl;
        cout<< "6) Mostrar listado." << endl;
        cout<< "7) Eliminar item." << endl;
        cout<< "8) Buscar item." << endl;
        cout<< "9) Salir." << endl;
        cout<< "\n\n Opcion: ";
        cin>> opcion_menu;

        switch(opcion_menu ){
            case 1: cout<< "\n\n Insertar ID \n\n";
            insertarNodo();
            break;
            case 2: cout<< "\n\n Insertar nombre del dueño \n\n";
            insertarNodo();
            break;
            case 3: cout<< "\n\n Insertar raza \n\n";
            insertarNodo();
            break;
            case 4: cout<< "\n\n Insertar peso \n\n";
            insertarNodo();
            break;
            case 5: cout<< "\n\n Insertar edad \n\n";
            insertarNodo();
            break;
            case 6: cout<< "\n\n Mostrar listado \n\n";
            desplegarLista();
            break;
            case 7: cout<< "\n\n Eliminar item \n\n";
            eliminarNodo();
            break;
            case 8: cout<< "\n\n Buscar item \n\n";
            buscarNodo();
            break;
            case 9: cout<< "\n\n Finalizar \n\n";
            break;
            default: cout<< "\n\n Opcion no valida \n\n";
        }
    }while(opcion_menu !=9);

    return 0;
}

void insertarNodo(){
    nodo* nuevo = new nodo();
    cout<< "Ingrese el dato que contendra el nuevo Nodo: ";
    cin>> nuevo->dato;
    if(primero==NULL){
        primero = nuevo;
        primero->siguiente = primero;
        ultimo = primero;
    }else{
        ultimo->siguiente = nuevo;
        nuevo->siguiente = primero;
        ultimo = nuevo;
    }
    cout<< "\n Nodo Ingresado\n\n";
}

void buscarNodo(){
    nodo* actual = new nodo();
    actual = primero;
    bool encontrado = false;
    int nodoBuscado = 0;
    cout<< "\n Ingrese el dato del nodo a Buscar: ";
    cin>> nodoBuscado;
    if(primero!=NULL){
        do{
            if(actual->dato == nodoBuscado){
                cout<< "\n El nodo con el dato ( " << nodoBuscado << " ) Encontrado\n\n";
                encontrado = true;
            }
            actual = actual->siguiente;
        }while(actual!=primero && encontrado != true);
        if(!encontrado){
            cout<< "\n Nodo no encontrado\n\n";
        }
    }else{
        cout<< "\n La lista se encuentra vacia\n\n";
    }
}

void eliminarNodo(){
    nodo* actual = new nodo();
    actual = primero;
    nodo* anterior = new nodo();
    anterior = NULL;
    bool encontrado = false;
    int nodoBuscado = 0;
    cout<< "\n Ingrese el dato del nodo a Buscar para eliminar: ";
    cin>> nodoBuscado;
    if(primero!=NULL){
        do{
            if(actual->dato == nodoBuscado){
                cout<< "\n El nodo con el dato ( " << nodoBuscado << " ) Encontrado\n\n";
                if(actual==primero){
                    primero = primero->siguiente;
                    ultimo->siguiente = primero;
                }else if(actual==ultimo){
                    anterior->siguiente = primero;
                    ultimo = anterior;
                }else{
                    anterior->siguiente = actual->siguiente;
                }

                cout<< "\n Nodo eliminado○\n\n";
                encontrado = true;
            }
            anterior = actual;
            actual = actual->siguiente;
        }while(actual!=primero && encontrado != true);
        if(!encontrado){
            cout<< "\n Nodo no encontrado\n\n";
        }
    }else{
        cout<< "\n La lista se encuentra vacia\n\n";
    }
}

void desplegarLista(){
    nodo* actual = new nodo();
    actual = primero;
    if(primero!=NULL){
        do{
            cout<< "\n " << actual->dato;
            actual = actual->siguiente;
        }while(actual!=primero);
    }else{
        cout<< "\n La lista se encuentra vacia\n\n";
    }
}