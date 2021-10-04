#include <iostream>

using namespace std;

int main(int, char**) {
    int lluviamm, lluviammSemana=0, lluviammTotal=0, semana=1, contadorDiasSinLluvia=0, semanaConMasLluvia, lluviaSemanaAnterior=0;
    for(semana; semana <= 4; semana++){
        int promedioLluviaSemana=0;
        for(int dia = 1; dia <= 7; dia++){
            cout << "Ingrese el valor en milímetros de la lluvia caida en el día: ";
            cin >> lluviamm;
            if(lluviamm == 0){
                contadorDiasSinLluvia++;
            }
            lluviammSemana += lluviamm;
        }
        promedioLluviaSemana = lluviammSemana / 7;
        if(lluviaSemanaAnterior < lluviammSemana){
            semanaConMasLluvia = semana;
        }
        lluviammTotal += lluviammSemana;
        cout << "En la semana hubo " << promedioLluviaSemana << "mm promedio de lluvia y no llovieron " << contadorDiasSinLluvia << " días.\n";
        lluviammSemana = 0;
        contadorDiasSinLluvia = 0;
    }
    cout << "Llovió en total " << lluviammTotal << "mm y la semana que más llovió fue la " << semanaConMasLluvia << "ª.\n";
    return 0;
}
