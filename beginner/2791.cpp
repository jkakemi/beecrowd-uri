#include <bits/stdc++.h>

using namespace std;

int main(){

    int c1, c2, c3, c4;
    vector<int> vet;

    cin >> c1 >> c2 >> c3 >> c4;

    vet.push_back(c1);
    vet.push_back(c2);
    vet.push_back(c3);
    vet.push_back(c4);

    for(int i=0; i<4; i++){
        if(vet[i] == 1){
            cout << i+1 << endl;
        } 
    }    

    return 0;
}