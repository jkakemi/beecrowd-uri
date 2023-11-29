#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, p, cont;

    cin >> n;

    for(int i=1; i<=n; i++){
        cin >> p;
        cont = 0;
        for(int j=1; j<=p; j++){
            if(p%j == 0){
                cont++;
            }
        }
        if(cont == 2){
        cout << p << " eh primo" << endl;
        }
        else{
            cout << p << " nao eh primo" << endl;
        }
    }

    return 0;
}