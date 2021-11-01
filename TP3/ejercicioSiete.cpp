#include <iostream>
#include <stdio.h>
#include <string.h>
#include <utility>
#include <string>
#include <list>
#include "ejercicioSiete.hpp"

using namespace std;

bool ingresoVehiculo(list<string>& vehiculos){
    string patente, hora;
    cout << "Ingrese la patente del vehículo: ";
    cin >> patente;
    cout << "Ingrese la hora actual (Formato HHMM): ";
    cin >> hora;
    if((patente.length() == 8 || patente.length() == 6) && hora.length() == 4){
        vehiculos.push_back(patente + hora);
        return true;
    }
    else
        return false;
}

string salidaVehiculo(list<string>& vehiculos){
    int coincidencias = 0;
    string patente;
    cout << "Ingrese la patente del vehículo saliente: ";
    cin >> patente;
    for(string vehiculo : vehiculos){
        for(int i = 0; i <= 6; ++i)
            if(vehiculo[i] == patente[i])
                coincidencias++;
        if(coincidencias == 6){
            vehiculos.remove(vehiculo);
            return vehiculo;
        }
        else
            coincidencias = 0;
    }
    return "Error";
}

string mostrarVehiculos(list<string>& vehiculos){
    string mostrarVehiculosEnString = "";
    for(string vehiculo : vehiculos){
        mostrarVehiculosEnString.append(vehiculo);
    }
    return mostrarVehiculosEnString;
}

bool quedanVehiculos(list<string> vehiculos){
    if(vehiculos.size() > 0)
        return true;
    else
        return false;
}