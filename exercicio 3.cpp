#include <iostream>

using namespace std;

int main() {
    char sexo;

    cout << "Digite o sexo (F ou M): ";
    cin >> sexo;

    while (sexo != 'F' && sexo != 'f' && sexo != 'M' && sexo != 'm') {
        cout << "Opcao invalida! Digite apenas F ou M: ";
        cin >> sexo;
    }

    cout << "Sexo informado com sucesso: " << sexo << endl;

    return 0;
}