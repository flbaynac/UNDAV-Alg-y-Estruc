#include <iostream>

using namespace std;

int main(){

    int num1, num2;

    cout << "Ingrese un número: ";
    cin >> num1;
    cout << "Ingrese otro número: ";
    cin >> num2;

    for(int i = num1; i <= num2; i++){

        cout << i << " - ";
    }

    return 0;
}