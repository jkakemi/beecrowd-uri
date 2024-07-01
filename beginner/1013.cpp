#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c, maior=0;

    cin >> a >> b >> c;

    if(a > maior){
        maior = a;
    }
    if(b > maior){
        maior = b;
    }
    if(c > maior){
        maior = c;
    }
    cout << maior << " eh o maior" << endl;

    return 0;
}