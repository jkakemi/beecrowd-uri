#include <bits/stdc++.h>

using namespace std;

#define MAX 100

int main(){

    int n, i, vet[MAX], maior=0, j;

    for(i=1; i<=100; i++){
        cin >> n;

        if(n > 0){
            vet[i] = n;

            if(vet[i] > maior){
                maior = vet[i];
                j = i;
            }
        }
    }

    cout << maior << endl;
    cout << j << endl;
    
    return 0;
}