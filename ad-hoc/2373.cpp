#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases;

    cin >> cases;
    int soma=0;
    while(cases--){
        int a, b;

        cin >> a >> b;
        
        if(a > b){
            soma+=b;
        }
    }

    cout << soma << endl;

    return 0;
}