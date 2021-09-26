#include <iostream>

using namespace std;

int main(){

    int num1, num2, num3;

    cout << "Ingrese un número: ";
    cin >> num1;
    cout << "Ingrese un segundo número: ";
    cin >> num2;
    cout << "Ingrese un tercer número: ";
    cin >> num3;

    if(num1 > num2 && num1 > num3){
        cout << num1 << " es el mayor";
        return 0;
    }

    if(num2 > num3){
        cout << num2 << " es el mayor";
        return 0;
    }

    cout << num3 << " es el mayor";
    return 0;
}