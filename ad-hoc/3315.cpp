#include <bits/stdc++.h>

using namespace std;

int main(){

    //vector<vector<int>> matriz(4)(7);
    int soma1=0, soma2=0, soma3=0, soma4=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<7; j++){
            // cin >> matriz[i][j];
            int x;
            cin >> x;
            if(i == 0){
                soma1 += x; 
            }
            else if(i == 1){
                soma2 += x; 
            }
            else if(i == 2){
                soma3 += x; 
            }
            else if(i == 3){
                soma4 += x; 
            }
        }
    }
    int maior = max({soma1, soma2, soma3, soma4});
    int original = maior;
    string binario = "";
    while(maior > 0){
        binario = to_string(maior%2) + binario;
        maior /= 2;
    }

    cout << original << " = " << binario << endl;

    return 0;
}