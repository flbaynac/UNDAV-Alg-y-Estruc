#include <iostream>
#include <limits.h>

using namespace std;

int main(){

    int num=0, max=INT_MIN, min=INT_MAX, promedio=0, index=0;

    while(num != -1){

        cout << "Ingrese un número (o ingrese -1 para salir): ";
        cin >> num;

        if(num == -1){
            continue;
        }

        if(num > max){

            max = num;
        }

        if(num < min){

            min = num;
        }

        promedio = promedio + num;

        index++;
    }

    if(index != 0){

        promedio = promedio / index;
        cout << "Máximo = " << max << " Mínimo = " << min << " Promedio = " << promedio;
    }

    return 0;
}