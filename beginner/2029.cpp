#include <bits/stdc++.h>

using namespace std;

int main() {
    double volume, diametro;

    while (cin >> volume >> diametro) {
        double raio = diametro / 2;
        double altura = volume / (3.14 * pow(raio, 2));
        double area = 3.14*pow(raio,2);

        cout << "ALTURA = " << fixed << setprecision(2) << altura << endl;
        cout << "AREA = " << fixed << setprecision(2) << area << endl;
    }

    return 0;
}
