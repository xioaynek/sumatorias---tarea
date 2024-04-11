#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0;

    cout << "Ingresa un numero para la sumatoria de 1: ";
    cin >> numero;

    cout << "La sumatoria es: ";
    for(int i = 1; i <= numero; i++) {
        suma += 1;
        if (i < numero) {
            cout << "1 + ";
        } else {
            cout << "1 = ";
        }
    }
    cout << suma << endl;

    return 0;
}
