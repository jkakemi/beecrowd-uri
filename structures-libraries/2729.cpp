#include <bits/stdc++.h>

using namespace std;

int main(){

    set<string> lista;
    string item;
    int cases;

    cin >> cases;
    cin.ignore();

    while(cases--){
        getline(cin, item);

        stringstream ss(item);
        string palavra;

        // É para extrair palavras esse stringstream! Posso manipular com mais formas.
        while(ss >> palavra){
            lista.insert(palavra);
        }

        bool flag = true;
        for (const auto& palavra : lista) {
            if(!flag){
                cout << " ";
            }
            cout << palavra;
            flag = false;
        }
        cout << endl;

        lista.clear();
    }

    return 0;
}