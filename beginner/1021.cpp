#include <bits/stdc++.h>

using namespace std;

int main() {
    double valor;
    int notas, moedas;
    int notasv[6] = {100, 50, 20, 10, 5, 2};
    int moedasv[6] = {100, 50, 25, 10, 5, 1};

    cin >> valor;

    cout << "NOTAS:" << endl;

    for (int i = 0; i < 6; i++) {
        notas = valor / notasv[i];
        valor -= notas * notasv[i];
        cout << notas << " nota(s) de R$ " << notasv[i] << ".00" << endl;
    }

    cout << "MOEDAS:" << endl;

    valor *= 100;
    for (int i = 0; i < 6; i++) {
        moedas = valor / moedasv[i];
        valor -= moedas * moedasv[i];
        if (moedasv[i] == 100)
            cout << moedas << " moeda(s) de R$ 1.00" << endl;
        else
            cout << moedas << " moeda(s) de R$ " << fixed << setprecision(2) << (float)moedasv[i]/100.00 << endl;
    }

    return 0;
}