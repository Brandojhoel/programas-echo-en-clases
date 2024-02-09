/*4 ..Crear una lista de numeros pares e impares - 10*/
#include<iostream>
using namespace std;
int main(){
    int par = 0 , inpar = 0;
    for(int i=1;i<=10;i++){
        if(i % 2 == 0){
        par++;    
        }
        else{
            inpar++;
        }
    }
    cout<<"numeros pares es: "<<par<<endl;
    cout<<"numero inpar es: "<<inpar<<endl;
    
}