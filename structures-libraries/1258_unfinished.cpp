#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    while(cin >> n && n != 0){
        string nome, cor, tamanho;
        vector<pair<string,string>> nome_cor;

        int x = n*2;
        for(int i=0; i<x; i++){
            cin >> nome >> cor >> tamanho;
            nome_cor.push_back(make_pair(nome, cor));
        }

        sort(nome_cor.begin(), nome_cor.end());

        for(const auto& n : nome_cor){
            cout << n.first << " " << n.second << endl;
        }


    }

    return 0;
}