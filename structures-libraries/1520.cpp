#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases;

    while(cin >> cases){

        int inicio, fim;
        vector<int> lote;
        for(int i=0; i<cases;i++){
            cin >> inicio >> fim;
            for(int i=inicio; i<=fim; i++){
                lote.push_back(i);
            }   
        }
        sort(lote.begin(), lote.end());
        int num;

        cin >> num;
        bool flag = false;
        int cont=0, pos;
        for(int i=0; i<lote.size(); i++){
            if(lote[i] == num){
                cont++;
                pos = i;
                flag = true;
            }
        }

        if(flag){
            cout << num << " found from " << pos-(cont-1) << " to " << pos << "\n";
        }
        else{
            cout << num << " not found\n";
        }
    }

    return 0;
}