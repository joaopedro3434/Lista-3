#include <iostream>

using namespace std;

int main() {
    int valor, maior;
    int soma = 0;

    for (int i = 1; i <= 10; i++) {

        do {
            cout << "Digite o " << i << "º valor positivo: ";
            cin >> valor;

            if (valor <= 0) {
                cout << "Erro! Digite apenas valores positivos.\n";
            }

        } while (valor <= 0);

        if (i == 1) {
            maior = valor;
        }

        if (valor > maior) {
            maior = valor;
        }

        soma += valor;
    }

    double media = soma / 10.0;

    cout << "\n===== RESULTADOS =====" << endl;
    cout << "Maior valor: " << maior << endl;
    cout << "Soma dos valores: " << soma << endl;
    cout << "Media aritmetica: " << media << endl;

    return 0;
}