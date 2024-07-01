#include <bits/stdc++.h>

using namespace std;

int main(){

    int numMarmores, consultas, cases=0;

    while(cin >> numMarmores && cin >> consultas && numMarmores != 0 && consultas != 0){
        int nM, consultado;
        vector<int> marmores;
        vector<int> consul;
        // vector<pair<int, int>> founded;
        // vector<int> notfounded;
        for(int i=0; i<numMarmores; i++){
            cin >> nM;
            marmores.push_back(nM);
        }
        for(int i=0; i<consultas; i++){
            cin >> consultado;
            consul.push_back(consultado);
        }

        sort(marmores.begin(), marmores.end());

        cout << "CASE# " << cases+1 << ":" << endl;
        for (int i = 0; i < consultas; i++) {
            int consultado = consul[i];
            auto it = lower_bound(marmores.begin(), marmores.end(), consultado);

            if (it != marmores.end() && *it == consultado) {
                cout << consultado << " found at " << (it - marmores.begin()) + 1 << endl;
            } else {
                cout << consultado << " not found" << endl;
            }
        }
        cases++;

        // Alguns testes:
        // for (int j = 0; j < consultas; j++) {
        //     auto it = lower_bound(marmores.begin(), marmores.end(), consultado);
            
        //     if (it != marmores.end() && *it == consultado) {
        //         cout << consultado << " found at " << (it - marmores.begin()) + 1 << endl;
        //     } else {
        //         cout << consultado << " not found" << endl;
        //     }
        // }
        // for(size_t i=0; i<marmores.size(); i++){
        //     for(size_t j=0; j<consul.size(); j++){
        //         if(marmores[i] == consul[j]){
        //             founded.push_back(make_pair(consul[j], i));
        //             // cout << consul[j] << " found at " << i+1 << endl;
        //         }
        //         else{
        //             notfounded.push_back(consul[j]);
        //         }
                
        //     }
        // }
        // if(!founded.empty()){
        //     for(const auto& f : founded){
        //         cout << f.first << " founded at " << f.second+1 << endl;
        //     }
        // }
        // if(!notfounded.empty()){
        //     for(const auto& f : notfounded){
        //         cout << f << " not found" << endl;
        //     }
        // }
    }
    return 0;
}