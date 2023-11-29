#include <bits/stdc++.h>

using namespace std;

#define MAX 1001

int main() {

    int t[MAX], n, menor = 9999, pos;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> t[i];

        if(t[i] < menor){
            menor = t[i];
            pos = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;

    return 0;
}