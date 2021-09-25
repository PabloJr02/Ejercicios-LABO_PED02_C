#include <iostream>
using namespace std;

void ContarIter(int);
void ContarRecur(int);

int main(void){
    int x;
    cout<< "Digite un numero para realizar el conteo: ";
    cin>>x;

    ContarIter(x);
    ContarRecur(x);

    return 0;
}

void ContarRecur(int x){
    if(x >= 1){
        cout << x << endl;
        x = x - 1;
        ContarRecur(x);
    }
}

void ContarIter(int x){
    int i;

    i = 1;
    while(i < x){
        cout << i << endl;
        i = i + 1;
    }
}