#include <iostream>
#include "ejercicio1.h"

using namespace std;

int cantidadCaracteres(char cad[], int q){
    int i;
    for(i=0;i<=q;i++){
        if(cad[i]=='\0'){
            break;
        }
    }
    return i;
}
