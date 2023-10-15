#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases, n, n2, cont = 0, game;

    while(cin >> cases >> n){
        cont=0;
        while(cases--){
            cin >> n2 >> game;
            if(n2 == n && game == 0){
                cont++;
            }
        }
        cout << cont << endl;
    }

    return 0;
}
