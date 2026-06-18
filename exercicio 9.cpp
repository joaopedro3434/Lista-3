#include <iostream>

using namespace std;

int main() {
    long long int a = 1, b = 1, proximo;

    cout << "Os 30 primeiros termos da Serie de Fibonacci:\n\n";

    cout << a << " " << b << " ";

    for (int i = 3; i <= 30; i++) {
        proximo = a + b;
        cout << proximo << " ";

        a = b;
        b = proximo;
    }

    cout << endl;

    return 0;
}