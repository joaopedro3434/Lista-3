#include <iostream>

using namespace std;

int main() {
    int valor;

    do {
        cout << "Digite um valor positivo: ";
        cin >> valor;

        if (valor <= 0) {
            cout << "Valor invalido! Tente novamente.\n";
        }

    } while (valor <= 0);

    cout << "Valor aceito: " << valor << endl;

    return 0;
}