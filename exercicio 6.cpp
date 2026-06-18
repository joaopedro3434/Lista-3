#include <iostream>

using namespace std;

int main() {
    int X, A, B;

    // Entrada de X (somente positivo)
    do {
        cout << "Digite um valor positivo para X: ";
        cin >> X;

        if (X <= 0) {
            cout << "Valor invalido! Digite apenas valores positivos.\n";
        }

    } while (X <= 0);

    // Entrada do intervalo
    cout << "Digite o valor inicial (A): ";
    cin >> A;

    cout << "Digite o valor final (B): ";
    cin >> B;

    // Validação: B deve ser maior que A
    while (B <= A) {
        cout << "Valor invalido! B deve ser maior que A.\n";
        cout << "Digite novamente o valor de B: ";
        cin >> B;
    }

    // Exibição da tabuada em ordem decrescente
    cout << "\nTabuada do " << X << " no intervalo de "
         << B << " ate " << A << ":\n\n";

    for (int i = B; i >= A; i--) {
        cout << X << " x " << i << " = " << X * i << endl;
    }

    return 0;
}