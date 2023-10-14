#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, par[5], impar[5], aux = 0, aux1 = 0;

    for (int i = 0; i < 15; i++) {
        cin >> n;

        if (n % 2 == 0) {
            par[aux] = n;
            aux++;
            if (aux == 5) {
                for (int t = 0; t < 5; t++) {
                    cout << "par[" << t << "] = " << par[t] << endl;
                }
                aux = 0;
            }
        } else {
            impar[aux1] = n;
            aux1++;
            if (aux1 == 5) {
                for (int t = 0; t < 5; t++) {
                    cout << "impar[" << t << "] = " << impar[t] << endl;
                }
                aux1 = 0;
            }
        }
    }

    for (int t = 0; t < aux1; t++) {
        cout << "impar[" << t << "] = " << impar[t] << endl;
    }
    for (int t = 0; t < aux; t++) {
        cout << "par[" << t << "] = " << par[t] << endl;
    }

    return 0;
}
