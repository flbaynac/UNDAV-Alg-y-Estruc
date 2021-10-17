#include <iostream>
#include <list>
#include <string>
#include "ejercicio3.h"

using namespace std;

string buscarCaracter(char cad[], int numCaracteres, char caracterBuscar){
    int contadorVecesEncontrado=0;
    list<int> posiciones;
    string retorno = "Se encontraron ";
    for(int i=0;i<numCaracteres-1;i++){
        if(cad[i]==caracterBuscar){
            contadorVecesEncontrado++;
            posiciones.push_back(i);
        }
    }
    if(contadorVecesEncontrado == 0){
        return "No se encontraron coincidencias\n";
    }
    retorno += to_string(contadorVecesEncontrado) + " en las posiciones ";
    for (int x : posiciones)
        retorno += to_string(x) + " ";
    return retorno;
}
