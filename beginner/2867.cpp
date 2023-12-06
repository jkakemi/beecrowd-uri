#include <bits/stdc++.h>

using namespace std;

int main() {

    int c;
    unsigned long long n, m;

    cin >> c;

    while(c--){
        cin >> n >> m;

        double lg = log10(n);
        lg *= m;
        cout << floor(lg)+1 << endl;
    }

    return 0;
}