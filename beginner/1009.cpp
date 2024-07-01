#include <bits/stdc++.h>

using namespace std;

int main(){

    string nome;
    double a, b;

    cin >> nome;

    cin >> a;
    cin >> b;

    double x = (b*0.15);
    double total = a + x;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;
    return 0;
}