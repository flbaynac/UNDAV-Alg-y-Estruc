#include <iostream>
#include "ejercicio5.h"

using namespace std;

void numVocales(char cad[],int numeroVocales[]){
    //int numeroVocales[5]={0,0,0,0,0};
    int i=0;
    while(cad[i]!='\0'){
        switch(cad[i]){
            case 'a':
                numeroVocales[0] += 1;
                break;
            case 'e':
                numeroVocales[1] += 1;
                break;
            case 'i':
                numeroVocales[2] += 1;
                break;
            case 'o':
                numeroVocales[3] += 1;
                break;
            case 'u':
                numeroVocales[4] += 1;
                break;
        }
        i++;
    }
}