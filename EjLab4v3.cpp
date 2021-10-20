#include "2daParteEjLab4v3.hpp"

int menu(){
    int opcion = 0;
    cout << endl << "1) Agregar una cuenta de usuario." << endl;
    cout << "2) Mostrar usuario." << endl;
    cout << "3) Salir." << endl;
    cout << "Opcion: ";
    cin >> opcion; cin.ignore();
    return opcion;
}

int main(void){
    ListaDoble Info;
    
    bool continuar = true;
    Cuenta p;
    do{
        switch(menu()){
            case 1:
                p = solicitarCuenta();
                Info.insertFront(p);
                cout << "Cuenta de usuario agregada exitosamente!" << endl;
                break;
            case 2:
                Info.traversalReverseDirection();
                break;
            case 3:
                continuar = false;
                break;
            default:
                cout << "Error, intente de nuevo." << endl;
                break;
        }
    }while(continuar);
    
    return 0;
}