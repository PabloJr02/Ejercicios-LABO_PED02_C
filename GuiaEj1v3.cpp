#include <iostream>
using namespace std;

int MCD(int a, int b){
    if(b==0) return a;
    else MCD(b,a%b);
}

int main(){
    int a, b;

    cout<< "Digite el 1er numero: ";
    cin>>a;
    cout<< "Digite el 2do numero: ";
    cin>>b;
    
    if(a>b) cout<< "\n MCD( " <<a<< " , " <<b<< " ) = " <<MCD(a,b)<<endl<<endl;
    else if(a<b) cout<< "\n MCD( " <<b<< " , " <<a<< " ) = " <<MCD(a,b)<<endl<<endl;


return 0;
}