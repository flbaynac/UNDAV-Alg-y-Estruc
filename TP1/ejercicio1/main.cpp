#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main(int, char**) {
    int num;
    list<int> multiplos;
    cout << "Ingrese un número entre 2 y 9 inclusive:";
    cin >> num;
    if(num >= 2 && num <= 9){
        int aux=0;
        for(int i = 0; i < 100; i++){
            aux = num*i;
            if(aux<100){
                multiplos.push_back(aux);
            }
        }
        cout << "Multiplos de " << num << " en forma ascendente:\n";
        for (int x : multiplos) {
		    cout << x << '\n';
	    }
        cout << "Multiplos de " << num << " en forma descendente:\n";
        multiplos.reverse();
        for (int x : multiplos) {
		    cout << x << '\n';
	    }
    }else{
        cout << "Ha ingresado un número fuera del parámetro.\n";
    }
    return 0;
}
