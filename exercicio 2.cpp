#include <iostream>

using namespace std;

int main() {
    int valor1, valor2;

    cout << "Digite o primeiro valor: ";
    cin >> valor1;

    cout << "Digite o segundo valor (maior que o primeiro): ";
    cin >> valor2;

    while (valor2 <= valor1) {
        cout << "Valor invalido! O segundo valor deve ser maior que o primeiro.\n";
        cout << "Digite novamente o segundo valor: ";
        cin >> valor2;
    }

    cout << "\nValores aceitos:" << endl;
    cout << "Primeiro valor: " << valor1 << endl;
    cout << "Segundo valor: " << valor2 << endl;

    return 0;
}