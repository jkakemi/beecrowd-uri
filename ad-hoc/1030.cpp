#include <bits/stdc++.h>

using namespace std;

int calcSobrev(int n, int k) {
    int restante = 0;
    for (int i = 2; i <= n; i++) {
        restante = (restante + k) % i;
    }
    return restante + 1;
}

int main() {
    int entrada;
    cin >> entrada;

    for (int i = 1; i <= entrada; i++) {
        int n, k;
        cin >> n >> k;

        int sobrevivente = calcSobrev(n, k);

        cout << "Case " << i << ": " << sobrevivente << endl;
    }

    return 0;
}
