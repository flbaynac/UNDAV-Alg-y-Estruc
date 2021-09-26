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

    if(num1 < num2){

        if(num2 < num3){

            cout << num1 << num2 << num3;
            return 0;
        }else{
            
            if(num1 < num3){

                cout << num1 << num3 << num2;
                return 0;
            }else{
                
                cout << num3 << num1 << num2;
                return 0;
            }   
        }
    }else{

        if(num1 < num3){

            cout << num2 << num1 << num3;
            return 0;
        }else{

            if(num2 < num3){

                cout << num2 << num3 << num1;
                return 0;
            }else{

                cout << num3 << num2 << num1;
                return 0;
            }
            
            cout << num2 << num3 << num1;
            return 0;
        }
    }

    return -1;
}