#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> palavra;
    string p;
    char letra;
    double porcentagem;
    int cont=1, cont2=0, existe=0;

    cin >> letra;
    cin.ignore();
    getline(cin, p);

    for(size_t i=0; i<p.length(); i++){
        if(p[i] == letra){
            existe++;
        }
        if(p[i] == ' '){
            cont++;
            if(existe != 0){
                existe = 0;
                cont2++;
            }
        }
        
    }

    if(existe != 0){
        cont2++;
    }

    porcentagem = static_cast<double>(cont2) / cont * 100.0;
    cout << fixed << setprecision(1) << porcentagem << endl;

    return 0;
}