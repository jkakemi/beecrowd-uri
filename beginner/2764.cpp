#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string dia, mes, ano;
    string data;
    cin >> data;
    
    dia = data.substr(0, 2);
    mes = data.substr(3, 2);
    ano = data.substr(6, 2);

    cout << mes << "/" << dia << "/" << ano << endl;
    cout << ano << "/" << mes << "/" << dia << endl;
    cout << dia << "-" << mes << "-" << ano << endl;

    return 0;
}