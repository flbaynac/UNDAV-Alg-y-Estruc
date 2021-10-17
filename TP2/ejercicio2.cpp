#include <iostream>
#include "ejercicio2.h"

using namespace std;

void copiarCadena(char cad1[], char cad2[]){
    int i=0;
    while(cad2[i]!='\0'){
        cad1[i] = cad2[i];
        i++;
    }
    cad1[i]='\0';
}
