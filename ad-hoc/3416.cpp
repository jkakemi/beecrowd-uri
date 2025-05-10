#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, l, d;

    cin >> n >> l >> d;

    double total = (double)(n*d)/1000;

    int lote = ceil(total/l);
    int t = lote*l;

    cout << t << endl;

    return 0;
}