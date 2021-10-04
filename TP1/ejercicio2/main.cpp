#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

void imprimirLista(list<int> lista){
    for (int x : lista){
        cout << x << "\n";
    }
}

void clasificarPersonas(list<int> edadPersonas, list<int> &porJubilarse, int &trabajando, int &menores, int &mayor){
    for (int x : edadPersonas) {
        if(x < 18){
            menores++;
        }
        if(x > 18 && x < 66){
            trabajando++;
        }
        if(x > 60 && x < 66){
            porJubilarse.push_back(x);
        }
        if(x > mayor){
            mayor = x;
        }
    }
}

int main(int, char**) {
    int edad, menores=0, trabajando=0;
    list<int> edadPersonas, porJubilarse;
    cout << "Ingrese la edad de una persona (o ingrese -1 para terminar): ";
    cin >> edad;
    while(edad != -1){
        edadPersonas.push_back(edad);
        cout << "Ingrese la edad de una persona (o ingrese -1 para terminar):";
        cin >> edad;
    }
    if(edadPersonas.size() > 0){
        int mayor=0;
        clasificarPersonas(edadPersonas, porJubilarse, trabajando, menores, mayor);
        cout << "Personas menores de edad:\n";
        cout << menores << "\n";
        cout << "Personas trabajando actualmente:\n";
        cout << trabajando << "\n";
        cout << "Edades de las personas que está cerca de jubilarse:\n";
        imprimirLista(porJubilarse);
        cout << "El mayor tiene: " << mayor << " años.\n";
    }
    return 0;
}
