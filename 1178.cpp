#include <bits/stdc++.h>

using namespace std;

#define MAX 1001

int main() {

    double x, n[100];

    cin >> x;

    n[0] = x;
    for(int i=0; i<100; i++){
        n[i+1] = n[i]/2;
    }

    for (int i = 0; i < 100; i++) {
        cout << "N[" << i << "] = " << fixed << setprecision(4) << n[i] << endl;
    }

    return 0;
}