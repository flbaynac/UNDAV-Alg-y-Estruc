#include <iostream>
#include <string>
#include "test.hpp"

using namespace std;

int main(int, char**) {
    if(testEjercicioUnoA())
        cout << "Ejercicio 1.A PASS\n";
    else
        cout << "Ejercicio 1.A FAILED\n";

    if(testEjercicioUnoB())
        cout << "Ejercicio 1.B PASS\n";
    else
        cout << "Ejercicio 1.B FAILED\n";

    if(testEjercicioUnoC())
        cout << "Ejercicio 1.C PASS\n";
    else
        cout << "Ejercicio 1.C FAILED\n";

    if(testEjercicioUnoD())
        cout << "Ejercicio 1.D PASS\n";
    else
        cout << "Ejercicio 1.D FAILED\n";

    if(testEjercicioSeis())
        cout << "Ejercicio 6 PASS\n";
    else
        cout << "Ejercicio 6 FAILED\n";

    if(testEjercicioSiete())
        cout << "Ejercicio 7 PASS\n";
    else
        cout << "Ejercicio 7 FAILED\n";

    return 0;
}
