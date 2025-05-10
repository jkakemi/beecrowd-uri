#include <bits/stdc++.h>

using namespace std;

int main(){

    int N;
    int i=0;
    while(cin >> N){
        if(i != 0){
            cout << endl;
        }
        int contF=0, contM=0;
        cin.ignore();
        string calcados;
        getline(cin, calcados);

        stringstream stream(calcados);
        int numero;
        char genero;
        vector<pair<int, char>> c;

        while(stream >> numero >> genero){
            if(numero == N && genero == 'F'){
                contF++;
                c.emplace_back(numero, genero);
            }
            else if(numero == N && genero == 'M'){
                contM++;
                c.emplace_back(numero, genero);
            }
        }

        cout << "Caso " << i+1 << ":" << endl;
        cout << "Pares Iguais: " << c.size() << endl;
        cout << "F: " << contF << endl;
        cout << "M: " << contM << endl;
        i++;
    }

    return 0;
}