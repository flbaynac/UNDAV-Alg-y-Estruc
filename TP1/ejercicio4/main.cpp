#include <iostream>

using namespace std;

void clasificarNumeros(int &num, int &numAnterior, int &grupoUnoContador, int &grupoDosContador, int &contadorDeInterrupciones){
    if(num > numAnterior){
        grupoUnoContador++;
        numAnterior = num;
    }else{
        grupoDosContador++;
        numAnterior = num;
        contadorDeInterrupciones++;
    }
}

int main(int, char**) {
    int num, numAnterior=0, contadorDeInterrupciones=0, grupoUnoContador=0, grupoDosContador=0;
    cout << "Ingrese un número natural(o ingrese -1 para terminar): ";
    cin >> num;
    while(num != -1){
        clasificarNumeros(num, numAnterior, grupoUnoContador, grupoDosContador, contadorDeInterrupciones);
        cout << "Ingrese un número natural(o ingrese -1 para terminar): ";
        cin >> num;
    }
    cout << "En el grupo uno hay " << grupoUnoContador << " números.\n";
    cout << "En el grupo dos hay " << grupoDosContador << " números.\n";
    cout << "Se interrumpe " << contadorDeInterrupciones << " veces el orden ascendente.\n";
    return 0;
}
