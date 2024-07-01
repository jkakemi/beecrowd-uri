#include <bits/stdc++.h>

using namespace std;

bool tam(const pair<string, int> &a, const pair<string, int> &b){
    if (a.first.size() != b.first.size()) {
        return a.first.size() > b.first.size();
    } else {
        return a.second < b.second;
    }
}

int main(){

    int cases;

    cin >> cases;
    cin.ignore();
    // cin.get();
    while(cases--){
        string frase;
        getline(cin, frase);

        stringstream ss(frase);
        vector<pair<string, int>> palavra;
        string p;
        int index=0;

        while(ss >> p){
            palavra.emplace_back(p, index++);
        }

        sort(palavra.begin(), palavra.end(), tam);

        for(size_t i = 0; i < palavra.size(); ++i){
            if (i > 0){
                cout << " ";
            }
            cout << palavra[i].first;
        }
        cout << endl;
        
    }


    return 0;
}