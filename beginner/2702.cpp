<<<<<<< HEAD
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
=======
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
>>>>>>> 2e77d1c951fd95f3d606f2c18800c9557d3ec5f5
