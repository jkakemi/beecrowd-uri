#include <bits/stdc++.h>

using namespace std;

int main(){

    int p, b, c, pa, ba, ca, resto, total=0;

    cin >> c >> b >> p;
    cin >> ca >> ba >> pa;

    if(ca > c){
        resto = ca - c;
        total += resto;
    }
    if(ba > b){
        resto = ba - b;
        total += resto;
    }
    if(pa > p){
        resto = pa - p;
        total += resto;
    }

    cout << total << endl;

    return 0;
}
