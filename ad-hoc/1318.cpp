#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m;

    while(cin >> n >> m){
        if(n == 0 && m == 0){
            break;
        }
        vector<int> bilhetes(m);
        unordered_map<int, int> bucket;
        for(int i=0; i<m; i++){
            cin >> bilhetes[i];
            bucket[bilhetes[i]]++;
        }

        int cont=0;
        for(auto f : bucket){
            if(f.second > 1){
                cont++;
            }
        }

        cout << cont << endl;
    }

    return 0;
}