#include <bits/stdc++.h>

using namespace std;

int main() {
    string senha;

    while (getline(cin, senha)) {
        bool maiu = false, minu = false, digito = false, especial = false;

        for (char c : senha) {
            if (isupper(c)) {
                maiu = true;
            }
            if (isdigit(c)) {
                digito = true;
            }
            if (islower(c)) {
                minu = true;
            }
            if (!isalnum(c)) {
                especial = true;
            }
        }

        if (minu && digito && maiu && senha.length() >= 6 && senha.length() <= 32 && !especial) {
            cout << "Senha valida." << endl;
        } else {
            cout << "Senha invalida." << endl;
        }
    }

    return 0;
}
