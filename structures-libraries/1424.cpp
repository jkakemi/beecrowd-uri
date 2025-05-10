#include <bits/stdc++.h>

using namespace std;

int main(){

    int m, n;

    while(cin >> n >> m){
        vector<int> numeros(n);
        unordered_map<int, vector<int>> index;

        for(int i=0; i<n; i++){
            cin >> numeros[i];

            index[numeros[i]].push_back(i+1);
        }

        while(m--){
            int k, v;

            cin >> k >> v;

            if(index.find(v) != index.end() && index[v].size() >= k){
                cout << index[v][k-1] << "\n";
            }
            else{
                cout << "0\n";
            }
        }

        // while(m--){
        //     int k, v, pos=-1;
        //     //vector<int> index;
        //     cin >> k >> v;
        //     int cont=0;
        //     for(int i=0;i<n; i++){
        //         if(numeros[i] == v){
        //             cont++;
        //             //index.push_back(i+1);
        //             if(cont == k){
        //                 pos = i+1;
        //                 break;
        //             }
        //         }
        //     }
        //     if(pos == -1){
        //         cout << "0\n"; 
        //     }
        //     else{
        //         cout << pos << endl;
        //     }
        // }
    }

    return 0;
}