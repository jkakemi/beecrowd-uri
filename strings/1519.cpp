#include <bits/stdc++.h>

using namespace std;

int main(){

    string frase;

    while(getline(cin, frase)){
        if(frase == "."){
            break;
        }

        stringstream ss(frase);
        string palavra;
        vector<string> vetor;
        while(ss >> palavra){
            vetor.push_back(palavra);
        }
        string resultado = "";
        int cont=0;
        for(int i=0; i<vetor.size(); i++){
            if(vetor[i].size() <= 2){
                //cout << vetor[i] << endl;
                resultado = resultado + vetor[i] + " ";
            }
            else{
                //cout << vetor[i][0] << endl;
                resultado = resultado + vetor[i][0] + ". ";
                cont++;
            }
        }

        stringstream st(resultado);
        string word;
        vector<string> vetor2;

        while(st >> word){
            vetor2.push_back(word);
        }

        cout << resultado << endl;

        sort(vetor2.begin(), vetor2.end());
        sort(vetor.begin(), vetor.end());
        cout << cont << endl;
        for(int i=0; i<=cont; i++){
            if(vetor2[i][1] != '.'){
                continue;
            }
            else{
                cout << vetor2[i] << " = " << vetor[i] << endl;
            }
        }
    }

    return 0;
}