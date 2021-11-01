#include <utility>
#include <string>
#include <list>
#include "test.hpp"
#include "ejercicioUno.hpp"
#include "ejercicioSeis.hpp"
#include "ejercicioSiete.hpp"

#include <iostream>

using namespace std;

bool testEjercicioUnoA(){
    int numbers[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int promedio = promedioArray(numbers, 20);
    if(promedio == 10)
        return true;
    else
        return false;
}

bool testEjercicioUnoB(){
    int numbers[20] = {1,2,3,4,5,6,7,8,9,15,11,12,13,14,15,16,24,18,19,20};
    int maximo = mayorEnArray(numbers, 20);
    if(maximo == 24)
        return true;
    else
        return false;
}

bool testEjercicioUnoC(){
    int numbers[20] = {1,2,3,4,5,6,7,8,9,15,11,12,13,14,15,16,24,18,19,20};
    pair<int, int> mayorMenor = mayorYMinimoArray(numbers, 20);
    if(mayorMenor.first == 16 && mayorMenor.second == 0)
        return true;
    else
        return false;
}

bool testEjercicioUnoD(){
    int numbers[20] = {1,2,3,4,5,6,7,8,9,15,11,12,13,14,15,16,24,18,19,20};
    string maximoPosicion = maximoYPosicion(numbers, 20);
    if(maximoPosicion.compare("El número mayor es: 24 y se encuentra en la posición: 16") == 0)
        return true;
    else
        return false;
}

bool testEjercicioSeis(){
    int arr1[20] = {1,2,3,4,5,6,7,8,9,15,11,12,13,14,15,16,24,18,19,20};
    int arr2[20] = {11,12,13,14,15,16,24,18,19,20,27,2,3,4,5,6,7,8,9,15};
    int newArr[40];
    int newArrTest[20] = {1,2,3,4,5,6,7,8,9,15,11,12,13,14,16,24,18,19,20,27};
    unirArray(arr1, arr2, newArr, 20, 20);
    for(int i; i < 20; i++){
        if(newArr[i] != newArrTest[i])
            return false;
    }
    return true;
}

bool testEjercicioSiete(){
    bool returnTest = true;
    list<string> vehiculos;
    if(ingresoVehiculo(vehiculos))
        returnTest = true;
    else
        returnTest = false;
    string error = "Error";
    if(error.compare(salidaVehiculo(vehiculos)) == 0)
        returnTest = false;
    ingresoVehiculo(vehiculos);
    string salidaVehiculos;
    for(string vehiculo : vehiculos)
        salidaVehiculos = vehiculo;
    if(salidaVehiculos.compare(mostrarVehiculos(vehiculos)) != 0)
        returnTest = false;
    return returnTest;
    if(quedanVehiculos)
        returnTest = true;
    else
        returnTest = false;
    return returnTest;
}