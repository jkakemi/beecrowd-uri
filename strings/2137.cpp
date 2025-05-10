#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases;

    while(cin >> cases){
        cin.ignore();

        string num;
        vector<string> numero;

        while(cases--){
            cin >> num;
            numero.push_back(num);
        }

        sort(numero.begin(), numero.end());

        for(const auto& n : numero){
            cout << n << endl;
        }

    }

    return 0;
}