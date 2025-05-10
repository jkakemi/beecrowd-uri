#include <bits/stdc++.h>

using namespace std;

int main(){

    string tipo;
    int t;
    int turistas=0, jipes=0;

    while(cin >> tipo && tipo != "ABEND"){
        cin >> t;

        if(tipo == "SALIDA"){
            turistas += t;
            jipes+=1;
        }
        else if(tipo == "VUELTA"){
            turistas -= t;
            jipes-=1;
        }
    }

    cout << turistas << endl;
    cout << jipes << endl;

    return 0;
}