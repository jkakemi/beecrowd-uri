#include <bits/stdc++.h>

using namespace std;

int main(){

    int a;
    double n, m;

    cin >> a;
    while(a--){
        cin >> n >> m;
        
        if(m == 0){
            cout << "divisao impossivel" << endl;
        }
        else{
            cout << fixed << setprecision(1) << n/m << endl;
        }
    }

    return 0;
}