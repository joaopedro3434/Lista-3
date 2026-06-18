#include <iostream>

using namespace std;

int main() {
    int N;
    double valor, soma = 0;
    double maior, menor;
    int positivos = 0, negativos = 0;

    // Validação de N
    do {
        cout << "Digite a quantidade de valores (maior que 0 e menor que 20): ";
        cin >> N;

        if (N <= 0 || N >= 20) {
            cout << "Erro! O valor deve ser maior que 0 e menor que 20.\n";
        }

    } while (N <= 0 || N >= 20);

    // Leitura dos valores
    for (int i = 1; i <= N; i++) {
        cout << "Digite o " << i << "º valor: ";
        cin >> valor;

        if (i == 1) {
            maior = valor;
            menor = valor;
        }

        if (valor > maior) {
            maior = valor;
        }

        if (valor < menor) {
            menor = valor;
        }

        soma += valor;

        if (valor > 0) {
            positivos++;
        } else if (valor < 0) {
            negativos++;
        }
    }

    double media = soma / N;
    double percPositivos = (positivos * 100.0) / N;
    double percNegativos = (negativos * 100.0) / N;

    cout << "\n===== RESULTADOS =====\n";
    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;
    cout << "Soma dos valores: " << soma << endl;
    cout << "Media aritmetica: " << media << endl;
    cout << "Percentual de valores positivos: "
         << percPositivos << "%" << endl;
    cout << "Percentual de valores negativos: "
         << percNegativos << "%" << endl;

    return 0;
}