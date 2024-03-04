#include <bits/stdc++.h>

using namespace std;

int main() {

    int cases, n, a, b;

    cin >> cases;

    while(cases--){
        cin >> n >> a >> b;

        if(n >= 200 && n <= 300 && a >= 50 && b >= 150){
            cout << "Sim" << endl;
        }
        else{
            cout << "Nao" << endl;
        }
    }

    return 0;
}