// 8. Hacer un programa que permita ingresar una lista de números que corta cuando se ingresa un cero. 
//    A partir de dichos datos informar:
//       a. El mayor de los números pares.
//       b. La cantidad de números impares.
//       c. El menor de los números primos.
//    Hacer uso de las funciones anteriormente desarrolladas.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

bool numPar(int);
bool numPrimo(int);

int main()
{
    int N, maxPar, conImp = 0, minPri, i = 1;
    bool banPar = false;
    bool banPri = false;
    bool banNum = false;

    cout << i << ". Ingresar un numero: ";
    cin >> N;

    if (N != 0) {
        banNum = true;

        while (N != 0) {
            i++;

            bool Par = numPar(N);
            if (Par) {
                if (!banPar) {
                    maxPar = N;
                    banPar = true;
                }
                else if (N > maxPar) {
                    maxPar = N;
                }
            }
            else {
                conImp++;
            }

            bool Primo = numPrimo(N);
            if (Primo) {
                if (!banPri) {
                    minPri = N;
                    banPri = true;
                }
                else if (N < minPri) {
                    minPri = N;
                }
            }

            cout << "\nPresione '0' para finalizar el proceso.";
            cout << "\n" << i << ". Ingrese otro numero: ";
            cin >> N;
        }
    }


    if (banNum && banPri) {
        if (banPar && conImp != 0) {
            cout << "\nEl maximo numero par: " << maxPar;
            cout << "\nCantidad de numeros impares: " << conImp;
            cout << "\nEl minimo numero primo: " << minPri << endl;
        }
        else if (banPar && conImp == 0) {
            cout << "\nEl maximo numero par: " << maxPar;
            cout << "\nNingun numero impar fue registrado.";
            cout << "\nEl minimo numero primo: " << minPri << endl;
        }
        else if (!banPar) {
            cout << "\nNingun numero par fue registado.";
            cout << "\nCantidad de numeros impares: " << conImp;
            cout << "\nEl minimo numero primo: " << minPri << endl;
        }
    }
    else if (banNum && !banPri) {
        if (banPar && conImp != 0) {
            cout << "\nEl maximo numero par: " << maxPar;
            cout << "\nCantidad de numeros impares: " << conImp;
            cout << "\nNingun numero primo fue registrado." << endl;
        }
        else if (banPar && conImp == 0) {
            cout << "\nEl maximo numero par: " << maxPar;
            cout << "\nNingun numero impar fue registrado.";
            cout << "\nNingun numero primo fue registrado." << endl;
        }
        else if (!banPar) {
            cout << "\nNingun numero par fue registrado.";
            cout << "\nCantidad de numeros impares: " << conImp;
            cout << "\nNingun numero primo fue registrado." << endl;
        }
    }
    else {
        cout << "\nError: ningun numero fue registrado." << endl;
    }

    return 0;
}

bool numPar(int N) {
    if (N % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool numPrimo(int N) {
    
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
