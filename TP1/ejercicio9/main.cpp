#include <iostream>

using namespace std;

int main(int, char**) {
    string fechaFiesta, fechaMenuUno, fechaMenuDos;
    char tipoDeFiesta;
    int cantidadPersonas, menuElegido, contadorFiestaTipoC=0, contadorFiestaTipoS=0, contadorFiestaTipoO=0, maximoMenuUno=0, maximoMenuDos=0, promedioPersonas=0, sumatoriaTotalPersonas=0, contadorFiestas=0;
    bool salir=0;
    while(salir != 1){
        cout << "Fecha de fiesta: ";
        cin >> fechaFiesta;
        cout << "Tipo de fiesta: ";
        cin >> tipoDeFiesta;
        if(tipoDeFiesta == 'C'){
            contadorFiestaTipoC++;
        }else if(tipoDeFiesta == 'S'){
            contadorFiestaTipoS++;
        }else{
            contadorFiestaTipoO++;
        }
        cout << "Cantidad personas: ";
        cin >> cantidadPersonas;
        sumatoriaTotalPersonas += cantidadPersonas;
        cout << "Menu elegido: ";
        cin >> menuElegido;
        if(menuElegido == 1 && maximoMenuUno < cantidadPersonas){
            fechaMenuUno = fechaFiesta;
        }
        if(menuElegido == 2 && maximoMenuDos < cantidadPersonas){
            fechaMenuDos = fechaFiesta;
        }
        cout << "¿Desea cargar otra fiesta? 0 para SI / 1 para NO (salir)";
        cin >> salir;
        contadorFiestas++;
    }
    cout << "Hubo " << contadorFiestaTipoC << " fiestas tipo C, " << contadorFiestaTipoS << " fiestas tipo S, " << contadorFiestaTipoO << " fiestas tipo O.\n";
    cout << "Fecha fiesta con mayor cantidad de personas menu UNO" << fechaMenuUno << "\n";
    cout << "Fecha fiesta con mayor cantidad de personas menu DOS" << fechaMenuDos << "\n";
    promedioPersonas = sumatoriaTotalPersonas / contadorFiestas;
    cout << "Hubo en promedio " << promedioPersonas << " personas en todas las fiestas.\n";
    return 0;
}
