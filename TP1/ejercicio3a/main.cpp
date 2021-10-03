#include <iostream>

using namespace std;

int main(int, char**) {
    int num, total=0, index=1, promedio;
    do{
        cout << "Ingrese un número: ";
        cin >> num;
        total += num;
        promedio = total / index;
        index++;
    }while(promedio < 20);
    cout << "El promedio es " << promedio << " y se ingresaron " << index -1 << " números.";
    return 0;
}
