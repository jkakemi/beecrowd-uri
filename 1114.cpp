#include <bits/stdc++.h>

using namespace std;

int main(){

    int senha = 2002, s;

    cin >> s;

    while(s != senha){
        cout << "Senha Invalida" << endl;
        cin >> s;
    }
    cout << "Acesso Permitido" << endl;

    return 0;
}