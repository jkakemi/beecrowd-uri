#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases;

    cin >> cases;
    vector<int> universidade;
    while(cases--){
        int u;
        cin >> u;

        universidade.push_back(u);
    }
    unsigned long long soma=0, total=0;
    for(size_t i=0; i<universidade.size(); i++){
        unsigned long long mod;
        total += universidade[i];
        mod = universidade[i]%3;
        soma += mod;
    }
    cout << total-soma << endl;

    return 0;
}