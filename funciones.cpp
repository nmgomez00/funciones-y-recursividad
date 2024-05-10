#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int fib(int numero){
    return (numero <= 1) ? numero : (fib(numero - 1) + fib(numero - 2));
}
void f();

bool es_primo(int numero){
    for(int i = 2; i<numero-1;i++){
        if(numero%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int numero;
    cout<<"Ingrese un numero \n";
    cin>>numero;
    //cout << "El numero " << numero << " " << (es_primo(numero) ? "es primo": "No es primo") << "\n";

    cout<<"El elemento  "<<numero<<" de la secuancia fibonacci es "<<fib(numero)<<"\n";
    f();
    return 0;

}

void f(){
    main();
}

