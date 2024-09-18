#include <bits/stdc++.h>

using namespace std;

int main(){

    string corvo;

    int soma=0;
    while(getline(cin, corvo)){
        
        if(corvo != "caw caw"){
            for(int i=0; i<3; i++){
                if(corvo[i] == '*'){
                    soma += pow(2, 2-i); 
                }
            }
        }
        else{
            cout << soma << endl;
            soma = 0;
        }

    }   

    return 0;
}