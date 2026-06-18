#include <iostream>

using namespace std;

int main() {
    int soma = 0;

    for (int i = 1; i <= 100; i++) {
        soma += i;
    }

    cout << "A soma dos numeros de 1 a 100 e: "
         << soma << endl;

    return 0;
}