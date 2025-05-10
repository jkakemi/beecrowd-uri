#include <bits/stdc++.h>

using namespace std;

bool ordena(const pair<int, int>& a, const pair<int, int>& b){
    if(a.second == b.second){
        if(a.first%2 != 0 && b.first%2 != 0){
            return a.first > b.first;
        }
        else if(a.first%2 == 0 && b.first%2 == 0){
            return a.first < b.first;
        }
        else{
            return a.first%2 != 0;
        }
    }
    return a.second < b.second;
}

// bool impar(const pair<int, int>& a, const pair<int, int>& b) {
//     if (a.second == b.second) {
//         return a.first > b.first;
//     }
//     return a.second < b.second;
// }

// bool par(const pair<int, int>& a, const pair<int, int>& b) {
//     if (a.second == b.second) {
//         return a.first < b.first;
//     }
//     return a.second < b.second;
// }


int main(){

    int n, m;

    while(cin >> n >> m){
        int x = n;
        if(n == 0 && m == 0){
            cout << "0 0" << endl;
            break;
        }

        vector<pair<int, int>> numMod;

        while(n--){
            int num, mod;
            cin >> num;
            mod = num%m;
            numMod.push_back(make_pair(num, mod));
        }
        
        sort(numMod.begin(), numMod.end(), ordena);

        cout << x << " " << m << endl;
        for(const auto& nm : numMod){
            cout << nm.first << endl;
        }
        // vector<pair<int, int>>::iterator it;
        // vector<pair<int, int>> pares;
        // vector<pair<int, int>> impares;

        // for(int i=0; i<numMod.size(); i++){
        //     if(numMod[i].first%2 == 0){
        //         pares.push_back(make_pair(numMod[i].first, numMod[i].second));
        //     }
        //     else{
        //         impares.push_back(make_pair(numMod[i].first, numMod[i].second));
        //     }
        // }

        // sort(impares.begin(), impares.end(), impar);
        // sort(pares.begin(), pares.end(), par);

        // vector<pair<int, int>> resultado;
        // resultado.insert(resultado.end(), impares.begin(), impares.end());
        // resultado.insert(resultado.end(), pares.begin(), pares.end());

        // sort(resultado.begin(), resultado.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        //     return a.second < b.second;
        // });

        // cout << x << " " << m << endl;
        // for(const auto& r : resultado){
        //     cout << r.first << endl;
        // }

    }

    return 0;
}