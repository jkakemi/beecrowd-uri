#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases;

    while(cin >> cases && cases != 0){
        int valor;
        string nome;

        vector<pair<string, int>> alunos;

        while(cases--){
            cin >> nome >> valor;
            alunos.push_back(make_pair(nome, valor));
        }

        for(int i=0; i<alunos.size(); i++){
            for(int j=0; j<alunos.size(); i++){
                
            }
        }

        // for(const auto& a : alunos){
        //     cout << a.first << " " << a.second << endl;
        // }
    }

    return 0;
}