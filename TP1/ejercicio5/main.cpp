#include <iostream>

using namespace std;

int main(int, char**) {
    int njuego=1, sumaTotal=0, promedioMaximo=0, cantidadValores=0, njuegoConMayorPromedio=0;
    cout << "Ingrese la cantidad de valores del juego " << njuego << " (o ingrese -1 para terminar): ";
    cin >> cantidadValores;
    while(cantidadValores != -1){
        int valores=0, sumaParcial=0, promedioJuego=0;
        for(int i = 0; i < cantidadValores; i++){
            cout << "Ingrese valores del juego Nº" << njuego << " :";
            cin >> valores;
            sumaParcial += valores;
        }
        sumaTotal += sumaParcial;
        promedioJuego = sumaParcial / cantidadValores;
        if(promedioJuego > promedioMaximo){
            promedioMaximo = promedioJuego;
            njuegoConMayorPromedio = njuego;
        }
        njuego++;
        cout << "Ingrese la cantidad de valores del juego " << njuego << " (o ingrese -1 para terminar): ";
        cin >> cantidadValores;
    }
    cout << "Suma total: " << sumaTotal << "\nNº juego con mayor promedio: " << njuegoConMayorPromedio << "\nPromedio Máximo: " << promedioMaximo << "\n";
    return 0;
}
