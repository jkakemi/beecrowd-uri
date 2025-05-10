#include <iostream>
#include <string>

using namespace std;

int restodivisao(const string &n, int m) {
    int resto = 0;

    for (char digito : n) {
        resto = (resto * 10 + (digito - '0')) % m;
    }

    return resto;
}

int main() {
    string n;
    int m;

    cin >> n >> m;

    cout << restodivisao(n, m) << endl;

    return 0;
}
