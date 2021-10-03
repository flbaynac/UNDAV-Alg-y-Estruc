#include <iostream>

using namespace std;

int main(int, char**) {
    int num, numAnterior=0, contadorDeInterrupciones=0, grupoUnoContador=0, grupoDosContador=0;
    cout << "Ingrese un número natural(o ingrese -1 para terminar): ";
    cin >> num;
    while(num != -1){
        if(num > numAnterior){
            grupoUnoContador++;
            numAnterior = num;
        }else{
            grupoDosContador++;
            numAnterior = num;
            contadorDeInterrupciones++;
        }
        cout << "Ingrese un número natural(o ingrese -1 para terminar): ";
        cin >> num;
    }
    cout << "En el grupo uno hay " << grupoUnoContador << " números.\n";
    cout << "En el grupo dos hay " << grupoDosContador << " números.\n";
    cout << "Se interrumpe " << contadorDeInterrupciones << " veces el orden ascendente.\n";
    return 0;
}
