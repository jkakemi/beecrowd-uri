#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, cont=0;
    char l;
    vector<char> letras;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> l;

        letras.push_back(l);
    }

    for(int j=0; j<letras.size(); j++){
        if(j>0){
            if(letras[j] == 'a' && (letras[j+1] == 'a' || letras[j-1] == 'a')){
                cont++;
            }
        }
        else{
            if(letras[j] == 'a' && letras[j+1] == 'a'){
                cont++;
            }
        }
    }
    
    cout << cont << endl;
    return 0;
}