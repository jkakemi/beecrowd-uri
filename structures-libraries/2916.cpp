#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

int main(){

    long long int n, k;

    vector<long long int> notas;
    while(cin >> n >> k){
        while(n--){
            long long int ni;
            cin >> ni;
            notas.push_back(ni);
        }

        sort(notas.begin(), notas.end(), greater<int>());

        long long int soma=0;
        for(int i=0; i<k; i++){
            soma = ((soma % MOD) + (notas[i] % MOD))%MOD;   
        }

        cout << soma << endl;
        notas.clear();
    }

    return 0;
}