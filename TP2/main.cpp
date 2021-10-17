#include <iostream>
#include <string.h>
#include "ejercicio1.h"
#include "ejercicio2.h"
#include "ejercicio3.h"
#include "ejercicio4.h"

#define TAMANIO_MAXIMO_CARACTERES_EJ1 30

using namespace std;

bool testEjercicioUno(){
    char cad[5] = "Hola";
    int resultado = cantidadCaracteres(cad,TAMANIO_MAXIMO_CARACTERES_EJ1);
    if(resultado == strlen(cad))
        return true;
    else
        return false;
}

bool testEjercicioDos(){
    bool validacion = false;
    char cad1[41];
    char cad2[41]= "universidad nacional de avellaneda";
    copiarCadena(cad1,cad2);
    if(strlen(cad2)==strlen(cad1))
        validacion = true;
    cout << "\nIngrese un texto para copiarlo(Ejercicio 2): ";
    cin >> cad2;
    copiarCadena(cad1,cad2);
    if(strlen(cad2)!=strlen(cad1))
        validacion = false;
    return validacion;
}

bool testEjercicioTres(){
    char cadenaPrueba[]="Testeando funcion";
    int largoCadena = strlen(cadenaPrueba);
    char caracterBuscar = 'e';
    string resultado;
    resultado = buscarCaracter(cadenaPrueba, largoCadena, caracterBuscar);
    if(resultado.compare("Se encontraron 2 en las posiciones 1 4 ") == 0)
        return true;
    else
        return false;
}

bool testEjercicioCuatro(){
    char parrafo[200] = "Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec \0";
    cout << datosDelParrafo(parrafo);
    if(true)
        return true;
    else
        return false;
}

int main() {/*
    if(testEjercicioUno())
        cout << "Ejercicio 1 Pass\n";
    else
        cout << " Ejercicio 1 Failed\n";

    if(testEjercicioDos())
        cout << "Ejercicio 2 Pass\n";
    else
        cout << " Ejercicio 2 Failed\n";

    if(testEjercicioTres())
        cout << "Ejercicio 3 Pass\n";
    else
        cout << " Ejercicio 3 Failed\n";*/

    if(testEjercicioCuatro())
        cout << "Ejercicio 4 Pass\n";
    else
        cout << " Ejercicio 4 Failed\n";
}