#include <iostream>
#include <string.h>
#include <list>
#include "ejercicio4.h"

using namespace std;

string datosDelParrafo(char parrafo[]){
    if(sizeof(&parrafo)<=200){
        list<string> palabras;
        string palabra="";
        int j=0, i=0;
        while(parrafo[j]!='\0'){
            while(parrafo[i]!=' '){
                if(parrafo[i]!='.'&&parrafo[i]!=','&&parrafo[i]!=';'&&parrafo[i]!=':'&&parrafo[i]!='!'&&parrafo[i]!='?')
                    palabra += parrafo[i];
                i++;
            }
            i++;
            j=i;
            palabras.push_back(palabra);
            palabra = "";
        }
        string resultado="Palabras que componen el parrafo: ";
        for (string elemento : palabras)
            resultado = resultado + elemento + "\n";
        resultado += "La cantidad de palabras son: " + to_string(palabras.size());
        resultado += " y se detectaron " + to_string(j) + " caracteres";
        return resultado;
    }else{
        return "Se ha ingresado un texto mayor a 200 caracteres";
    }
    return "Error";
}
