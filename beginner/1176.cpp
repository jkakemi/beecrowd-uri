#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, f;
    long long int fibo[61];

    cin >> n;
    fibo[0] = 0;
    fibo[1] = 1;

    for(int i=2; i<=60; i++){
        fibo[i] = fibo[i-2] + fibo[i-1];
    }
    
    for(int i=0; i<n; i++){
        cin >> f;
        cout << "Fib(" << f << ") = " << fibo[f] << endl;
    }

    return 0;
}