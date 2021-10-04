#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

void imprimirLista(list<int> &multiplos){
    for (int x : multiplos) {
	    cout << x << '\n';
	}
}

void revertirLista(list<int> &multiplos){
    multiplos.reverse();
}

void calcularMultiplos(int &num, list<int> &multiplos){
    int aux = 0;
    for(int i = 0; i < 100; i++){
        aux = num*i;
        if(aux < 100){
            multiplos.push_back(aux);
        }
    }
}

int main(int, char**) {
    int num;
    list<int> multiplos;
    cout << "Ingrese un número entre 2 y 9 inclusive:";
    cin >> num;
    if(num >= 2 && num <= 9){
        calcularMultiplos(num, multiplos);
        cout << "Multiplos de " << num << " en forma ascendente:\n";
        imprimirLista(multiplos);
        cout << "Multiplos de " << num << " en forma descendente:\n";
        revertirLista(multiplos);
        imprimirLista(multiplos);
    }else{
        cout << "Ha ingresado un número fuera del parámetro.\n";
    }
    return 0;
}
