#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string n1, n2;
    int cont=0;

    while (cin >> n1 >> n2) {
        int qtde = 0;
        int posU = 0;
        int posAtual = n2.find(n1);

        while (posAtual != string::npos) {
            qtde++;
            posU = posAtual;
            posAtual = n2.find(n1, posAtual + 1);
        }

        cont++;

        if (qtde > 0) {
            cout << "Caso #" << cont << ":\nQtd.Subsequencias: " << qtde << "\nPos: " << posU + 1 << "\n\n";
        } else {
            cout << "Caso #" << cont << ":\nNao existe subsequencia\n\n";
        }
    }

    return 0;
}
