#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases;

    cin >> cases;
    while(cases--){
        vector<int> alturas;
        unsigned int qtde, alt;

        cin >> qtde;
        for(size_t i=0; i<qtde; i++){
            cin >> alt;
            alturas.push_back(alt);
        }

        sort(alturas.begin(), alturas.end());

        for(size_t i=0; i<alturas.size(); i++){
            if(i > 0){
                cout << " ";
            }
            cout << alturas[i];
        }
        cout << endl;
    }
    return 0;
}