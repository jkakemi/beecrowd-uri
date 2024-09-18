#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    cin.ignore();
    while(cases--){
        set<char> duplicado;
        string dieta;
        string manha, almoco;
        bool repetido = false;

        getline(cin, dieta);
        getline(cin, manha);
        getline(cin, almoco);

        for(char c : manha + almoco) {
            if(dieta.find(c) == string::npos) {
                repetido = true;
                break;
            }
            if(duplicado.find(c) != duplicado.end()) {
                repetido = true;
                break;
            }
            duplicado.insert(c);
        }

        if(repetido) {
            cout << "CHEATER" << endl;
        } else {
            string resto;
            for(char c : dieta) {
                if(duplicado.find(c) == duplicado.end()) {
                    resto += c;
                }
            }
            sort(resto.begin(), resto.end());
            cout << resto << endl;
        }
    }

    return 0;
}
