#include <bits/stdc++.h>

using namespace std;

int MakeChange(vector<int>& blocos, int troco){
    vector<int> quant(troco+1, INT_MAX);
    vector<int> ultima(troco+1, -1);

    quant[0] = 0;

    for(int cents=1; cents<=troco; cents++){
        // int quantProv = cents;
        // int ultProv = 1;
        for(int j=0; j<blocos.size(); j++){
            if(blocos[j] > cents) continue;
            if(quant[cents-blocos[j]]+1 < quant[cents]){
                quant[cents] = quant[cents-blocos[j]]+1;
                ultima[cents] = blocos[j];
            }
        }
        // quant[cents] = quantProv;
        // ultima[cents] = ultProv;
    }
    return quant[troco];
}

int main(){

    int cases;

    cin >> cases;

    while(cases--){
        int n, m;
        cin >> n >> m;

        vector<int> tipos_blocos;
        while(n--){
            int t;
            cin >> t;
            tipos_blocos.push_back(t);
        }

        sort(tipos_blocos.begin(), tipos_blocos.end(), greater<int>());

        int qtdeBlocos = MakeChange(tipos_blocos, m);

        cout << qtdeBlocos << endl;
    }

    return 0;
}