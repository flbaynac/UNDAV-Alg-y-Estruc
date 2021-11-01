#include <climits>
#include <utility>
#include <string>
#include "ejercicioUno.hpp"

using namespace std;

int promedioArray(int *numbers, int size){
    if(size > 0){
        int promedio, i;
        for(i = 0; i < size; ++i){
            if(i == 0)
                promedio = numbers[i];
            else
                promedio += numbers[i];
        }
        return promedio / i;
    }
    return -1;
}

int mayorEnArray(int *numbers, int size){
    if(size > 0){
        int mayor = INT_MIN;
        for(int i = 0; i < size; ++i)
            if(numbers[i] > mayor)
                mayor = numbers[i];
        return mayor;
    }
    return -1;
}

pair<int, int> mayorYMinimoArray(int *numbers, int size){
    if(size > 0){
        int mayor = INT_MIN;
        int menor = INT_MAX;
        int iMayor, iMenor;
        for(int i = 0; i < size; ++i){
            if(numbers[i] > mayor){
                mayor = numbers[i];
                iMayor = i;
            }
            if(numbers[i] < menor){
                menor = numbers[i];
                iMenor = i;
            }
        }
        return std::make_pair(iMayor, iMenor);
    }
    return std::make_pair(-1, -1);
}

string maximoYPosicion(int *numbers, int size){
    if(size > 0){
        int mayor = INT_MIN;
        int iMayor;
        for(int i = 0; i < size; ++i){
            if(numbers[i] > mayor){
                mayor = numbers[i];
                iMayor = i;
            }
        }
        return "El número mayor es: " + to_string(mayor) + " y se encuentra en la posición: " + to_string(iMayor);
    }
    return "Error";
}