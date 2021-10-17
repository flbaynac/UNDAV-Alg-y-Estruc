#include <iostream>
#include <string.h>
#include <list>

using namespace std;

string datosDelParrafo(char parrafo[]){
    if(sizeof(&parrafo)<=200){
        list<string> palabras;
        string palabra="";
        int j=0;
        while(parrafo[j]!='\0'){
            int i=0;
            cout << i;
            while(parrafo[i]!=' '){
                if(parrafo[i]!='.'&&parrafo[i]!=','&&parrafo[i]!=';'&&parrafo[i]!=':'&&parrafo[i]!='!'&&parrafo[i]!='?')
                    palabra += parrafo[i];
            }
            palabras.push_back(palabra);
            j++;
        }
        string resultado="Palabras que componen el parrafo: ";
        for (string elemento : palabras)
            resultado += elemento + "\n";
        resultado += "La cantidad de palabras son: " + to_string(palabras.size());
        resultado += " y se detectaron " + to_string(j) + "caracteres";
    }else{
        return "Se ha ingresado un texto mayor a 200 caracteres";
    }
    return "Error";
}
