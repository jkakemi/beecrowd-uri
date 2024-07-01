#include <bits/stdc++.h>

using namespace std;

int main(){
    string nome;

    cin >> nome;

    transform(nome.begin(), nome.end(), nome.begin(), ::tolower);
    
    size_t encontrou = nome.find("zelda");

    // se encontrou não for igual ao fim significa que encontrou um zelda
    if(encontrou != string::npos){
        cout << "Link Bolado" << endl;
    }
    else{
        cout << "Link Tranquilo" << endl;
    }


    return 0;
}