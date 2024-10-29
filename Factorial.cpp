#include <iostream>
using namespace std;

/** Función recursiva para calcular el factorial**/
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

/** Función del cajero automático**/
void cajeroAutomatico() {
    int saldo = 20000;
    int opcion;
    int retiro;

    do {
        cout << "\n--- Cajero Automático ---\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Retirar efectivo\n";
        cout << "3. Salir del cajero\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Su saldo actual es: $" << saldo << endl;
                break;
            case 2:
                cout << "Ingrese la cantidad a retirar: ";
                cin >> retiro;
                if (retiro > saldo) {
                    cout << "Fondos insuficientes.\n";
                } else {
                    saldo -= retiro;
                    cout << "Retiro exitoso. Su nuevo saldo es: $" << saldo << endl;
                }
                break;
            case 3:
                cout << "Saliendo del cajero...\n";
                break;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";
        }
    } while (opcion != 3);
}

int main() {
    int opcion;
    do {
        /**Menu principal**/
        cout << "\n--- Menú Principal ---\n";
        cout << "1. Calcular Factorial\n";
        cout << "2. Usar Cajero Automático\n";
        cout << "3. Salir del programa\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;
        /**inicio del switch del menu principal**/
        switch (opcion) {
            case 1: {
                int numero;
                cout << "Ingrese un número para calcular su factorial: ";
                cin >> numero;

                if (numero < 0) {
                    cout << "El factorial no está definido para números negativos." << endl;
                } else {
                    cout << "El factorial de " << numero << " es: " << factorial(numero) << endl;
                }
                break;
            }
            case 2:
                cajeroAutomatico();
                break;
            case 3:
                cout << "Programa finalizado." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo.\n";
        }
        /**final del menu principal**/
    }/**salida del ciclo del menu principal**/ 
    while (opcion != 3);

    return 0;
}
