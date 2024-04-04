#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int cases, n;

    cin >> cases;

    while(cases--){
        cin >> n;
        int cont=0;
        cout << "RAIZ QUADRADA" << sqrt(n) << endl;
        for(int i=2;  i<=sqrt(n); i++){
            cout << "N ATUAL " << n << endl;
            if(n%i==0){
                cont++;
            }
        }
        if(cont == 0){
            cout << "Prime" << endl;
        }
        else{
            cout << "Not Prime" << endl;
        }
    }
    
    return 0;
}