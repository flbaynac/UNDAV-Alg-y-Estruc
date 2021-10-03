#include <iostream>

using namespace std;

int main(int, char**) {
    int lluviamm, semana=1, dia=1, contadorDiasSinLluvia=0;
    for(semana; semana <= 4; semana++){
        int promedioLluviaSemana=0;
        for(dia; dia <= 7; dia++){
            cout << "Ingrese el valor en milímetros de la lluvia caida en el día: ";
            cin >> lluviamm;
            if(lluviamm == 0){
                contadorDiasSinLluvia++;
            }
        }
        promedioLluviaSemana = lluviamm / 7;
    }
    return 0;
}
