#include <iostream>
#include <string>

using namespace std;

int main(int, char**) {
    string comercio, codigo, codigoProductoLlamadaMasLarga;
    char tipoDeLlamado;
    int duracionLlamada, duracionLlamadaAnterior=0, contadorReclamo=0, contadorConsultas=0;
    bool salir=0;
    while(salir != 1){
        cout << "Comercio donde adquirió el producto: ";
        cin >> comercio;
        cout << "Código del producto: ";
        cin >> codigo;
        cout << "Tipo de llamado (C => Consulta / R => Reclamo): ";
        cin >> tipoDeLlamado;
        if(tipoDeLlamado == 'R'){
            contadorReclamo++;
        }else{
            contadorConsultas++;
        }
        cout << "Duración llamado: ";
        cin >> duracionLlamada;
        if(duracionLlamadaAnterior < duracionLlamada){
            codigoProductoLlamadaMasLarga = codigo;
        }
        cout << "¿Desea cargar otra llamada? 0 para SI / 1 para NO (salir)";
        cin >> salir;
    }
    cout << "Hubo " << contadorConsultas << " consultas y " << contadorReclamo << " reclamos.\n";
    cout << "Coigo del producto por llamada más larga: " << codigoProductoLlamadaMasLarga;
    
}
