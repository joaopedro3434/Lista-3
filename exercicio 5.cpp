#include <iostream>

using namespace std;

int main() {
    int valor;

    // Entrada validada
    do {
        cout << "Digite um valor positivo: ";
        cin >> valor;

        if (valor <= 0) {
            cout << "Valor invalido! Digite apenas valores positivos.\n";
        }

    } while (valor <= 0);

    // Exibição da tabuada
    cout << "\nTabuada do " << valor << ":\n";

    for (int i = 1; i <= 10; i++) {
        cout << valor << " x " << i << " = " << valor * i << endl;
    }

    return 0;
}