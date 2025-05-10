#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string frase;
    string maior = "";
    while(getline(cin, frase)){
        if(frase == "0"){
            break;
        }
        
        stringstream ss(frase);
        string word;
        vector<string> palavras;
        while(ss >> word){
            palavras.push_back(word);
        }

        bool primeiro = true;
        for (const string &p : palavras) {
            if(!primeiro){
                cout << "-";
            }
            cout << p.size();
            primeiro = false;

            if(p.size() >= maior.size()){
                maior = p;
            }
        }
        cout << endl;
    }

    cout << endl;

    cout << "The biggest word: " << maior << endl;

    return 0;
}