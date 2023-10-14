#include <bits/stdc++.h>

using namespace std;

int main() {

    double media=0.0, n;
    int cont=0;

    do{
        cin >> n;

        if (n >= 0) {
            media += n;
            cont++;
        }

    }while(n >= 0);

    cout << fixed << setprecision(2) << media/cont << endl;

    return 0;
}