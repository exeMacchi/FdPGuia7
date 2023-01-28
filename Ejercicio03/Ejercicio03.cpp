// 3. Hacer una función llamada “par” que reciba un número entero y devuelva 1 si es par o cero si no lo es. 
//    Hacer un programa para ingresar 20 números y mostrar por pantalla cuántos son pares.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

bool Par(int N);

int main()
{
    int N, ConPar = 0;
    bool par = false;

    for (int i = 0; i < 20; i++) {
        cout << i + 1 << ". Ingrese un numero: ";
        cin >> N;

        par = Par(N);

        if (par) {
            ConPar++;
        }
    }

    if (ConPar != 0) {
        cout << "\nCantidad de numeros pares: " << ConPar << endl;
    }
    else {
        cout << "\nNingun numero par fue registrado." << endl;
    }
    return 0;
}

bool Par(int N) {
    if (N % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}
