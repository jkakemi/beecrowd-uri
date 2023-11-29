#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    double fib;

    cin >> n;

    double phi = (1 + sqrt(5)) / 2;
    fib = (pow(phi, n) - pow(1 - phi, n)) / sqrt(5);

    cout << fixed << setprecision(1) << fib << endl;

    return 0;
}
