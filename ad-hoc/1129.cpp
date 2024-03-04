#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases;
    
    while (cin >> cases && cases != 0) {
        for (int i = 0; i < N; ++i) {
            int a, b, c, d, e;
            cin >> a >> b >> C >> D >> E;

            int cont = 0;
            if (a <= 127) cont++;
            if (b <= 127) cont++;
            if (c <= 127) cont++;
            if (d <= 127) cont++;
            if (e <= 127) cont++;

            if (cont == 1) {
                if (a <= 127) cout << "A" << endl;
                else if (b <= 127) cout << "B" << endl;
                else if (c <= 127) cout << "C" << endl;
                else if (d <= 127) cout << "D" << endl;
                else if (e <= 127) cout << "E" << endl;
            } else {
                cout << "*" << endl;
            }
        }
    }

    return 0;
}