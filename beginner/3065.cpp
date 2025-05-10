#include <bits/stdc++.h>

using namespace std;

int main(){

    string expressao;
    int n;
    int j=0;
    while(cin >> n && n != 0){
        
        cin >> expressao;
        int total=0;
        int numero=0;

        char op = '+';
        int cont=0;
        for(int i=0; i<=expressao.size(); i++){
            if(i < expressao.size() && isdigit(expressao[i])){
                numero = numero*10+(expressao[i] - '0');
            }
            else{
                if(op == '+'){
                    total += numero;
                }
                else if(op == '-'){
                    total -= numero;
                }
                cont++;
                if(cont == n){ break; }
                if(i < expressao.size()) { op = expressao[i]; }
                numero = 0;
            }
        }

        cout << "Teste " << j+1 << endl;
        cout << total << endl;
        cout << endl;
        j++;
    }
    return 0;
}