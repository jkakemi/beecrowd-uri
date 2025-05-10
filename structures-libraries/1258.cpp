#include <bits/stdc++.h>

using namespace std;

int ordena(const pair<string, pair<string, string>>& a, const pair<string, pair<string, string>>& b){
    if(a.second.first != b.second.first){
        return a.second.first < b.second.first;
    }
    if (a.second.second != b.second.second) {
        return a.second.second > b.second.second;
    }
    if(a.first != b.first){
        return a.first < b.first;
    }
}

int main(){

    int cases;
    bool flag = true;
    
    while(cin >> cases && cases != 0){
        string nome;
        string corTam;
        vector<pair<string, pair<string, string>>> pessoas;
        cin.ignore();
        while(cases--){
            getline(cin, nome);
            getline(cin, corTam);

            stringstream ss(corTam);
            string cor, tam;
            ss >> cor >> tam;
            pessoas.push_back(make_pair(nome, make_pair(cor, tam)));
        }

        sort(pessoas.begin(), pessoas.end(), ordena);
        if(!flag){
            cout << endl;
        }
        flag = false;
        for(const auto& p : pessoas){
            cout << p.second.first << " " << p.second.second << " " << p.first << endl;
        }
    }

    return 0;
}