#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int l, v;
    
    while(cin >> l){
        int maior=0;
        for(int i=0; i<l; i++){
            cin >> v;
        
            if(v > maior){
                maior = v; 
            }   
        }
        if(maior < 10){
            printf("1\n");
        }
        else if(maior < 20){
            printf("2\n");
        }
        else{
            cout << "3" << endl;
        }
    }
    
    return 0;
}