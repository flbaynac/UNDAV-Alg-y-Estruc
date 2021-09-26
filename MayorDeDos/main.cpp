#include <iostream>

using namespace std;

int main(){

    int num1, num2;

    cout << "Ingrese un número: ";
    cin >> num1;
    cout << "Ingrese un segundo número: ";
    cin >> num2;

    if(num1 > num2){
        cout << num1 << " es mayor";
        return 0;
    }

    cout << num2 << " es mayor";
    return 0;
}