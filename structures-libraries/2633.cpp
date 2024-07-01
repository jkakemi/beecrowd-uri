#include <bits/stdc++.h>

using namespace std;

bool ordenar(const pair<string, int> &a, const pair<string, int> &b){
    return a.second < b.second;
}

int main()
{
    int qtde, cases;
    string carne;

    while(cin >> cases){
        vector<pair<string, int>> churras;

        for(int i=0; i<cases; i++){
            cin >> carne >> qtde;
            churras.push_back(make_pair(carne, qtde));
        }

        sort(churras.begin(), churras.end(), ordenar);

        for(size_t i=0; i<churras.size(); i++){
            if(i > 0){
                cout << " ";
            }
            cout << churras[i].first;
        }
        cout << endl;
    }

    return 0;
}