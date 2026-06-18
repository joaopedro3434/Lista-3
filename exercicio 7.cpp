#include <iostream>

using namespace std;

int main() {
    for (int numero = 1; numero <= 20; numero++) {

        cout << "\n===== TABUADA DO " << numero << " =====\n";

        for (int i = 1; i <= 10; i++) {
            cout << numero << " x " << i
                 << " = " << numero * i << endl;
        }

        if (numero < 20) {
            cout << "\nPressione ENTER para continuar...";
            cin.ignore();
            cin.get();
        }
    }

    return 0;
}