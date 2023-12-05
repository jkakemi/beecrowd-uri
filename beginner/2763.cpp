#include <bits/stdc++.h>

using namespace std;

int main(){

    string cpf, aux;
    int cont=0, j=0;

    getline(cin, cpf);

    //cpf.erase(remove(cpf.begin(), cpf.end(), '.'), cpf.end());
    aux.resize(11); // Definir o tamanho da string auxiliar para 11

    for(int i=0; i<cpf.size(); i++){
        if(cpf[i] != '.' && cpf[i] != '-'){
            cont++;
            aux[j] = cpf[i];
            j++;
            if (cont == 3) {
                for (int k = 0; k < 3; k++) {
                    cout << aux[k];
                }
                cout << endl;
                cont = 0;
                j = 0;
            }
        }
    }

    for (int k = 0; k < j; k++) {
        cout << aux[k];
    }
    cout << endl;

    return 0;
}