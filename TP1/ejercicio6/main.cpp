#include <iostream>

using namespace std;

int main(int, char**) {
    int num1, num2, resultado;
    char operacion;
    bool salir=0;
    while(salir == 0){
        cout << "Ingrese un número: ";
        cin >> num1;
        cout << "Ingrese otro número: ";
        cin >> num2;
        cout << "Seleccione la operación (+, -, /, *) o 'f' para salir: ";
        cin >> operacion;
        switch(operacion){
            case '+':
                resultado = num1 + num2;
                cout << "El resultado es: " << resultado << "\n\n";
                break;
            case '-':
                resultado = num1 - num2;
                cout << "El resultado es: " << resultado << "\n\n";
                break;
            case '*':
                resultado = num1 * num2;
                cout << "El resultado es: " << resultado << "\n\n";
                break;
            case '/':
                if(num2 == 0){
                    cout << "No se puede dividir por 0\n\n";
                    break;
                }
                resultado = num1 + num2;
                cout << "El resultado es: " << resultado << "\n\n";
                break;
            case 'f':
                salir = 1;
                cout << "Hasta luego.\n";
                break;
            default:
                cout << "No ha ingresado un operador correcto";
                break;
        }
    }
    
    return 0;
}
