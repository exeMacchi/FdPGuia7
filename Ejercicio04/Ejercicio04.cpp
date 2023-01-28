// 4. Hacer una función llamada “primo” que reciba un número entero y devuelva 1 si el número es primo o cero 
//    si no lo es. 
//    Hacer un programa para ingresar números. El lote corta cuando se ingresa un número cero. 
//    Informar el promedio teniendo en cuenta sólo los números primos.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

bool Primo(int);
int Promedio(int, int);

int main()
{
    int N, numPri = 0, acuPri = 0;
    int Pro = 0;
    bool BanNum = false;
    bool banPri = false;

    cout << "Ingrese un numero: ";
    cin >> N;

    if (N != 0) {
        BanNum = true;
    }

    while (N != 0) {

        if (Primo(N)) {
            numPri++;
            acuPri += N;
            banPri = true;
        }

        cout << "\nPresione '0' para finalizar el proceso.";
        cout << "\nIngrese otro numero: ";
        cin >> N;
    }

    if (BanNum) {
        if (banPri) {
            Pro = Promedio(acuPri, numPri);
            cout << "\nEl promedio de numeros primos es: " << Pro << endl;
        }
        else {
            cout << "\nNingun numero primo fue registrado." << endl;
        }
    }
    else {
        cout << "\nError: ningun numero fue registrado." << endl;
    }

    return 0;
}

bool Primo(int N) {
    if (N > 0) {
        int conPri = 0;

        for (int i = 1; i <= N; i++) {
            if (N % i == 0) {
                conPri++;
            }
        }

        if (conPri == 2) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

int Promedio(int Acu, int Con) {
    return Acu / Con;
}
