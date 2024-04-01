#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int buscaBinaria(vector<int> v, int a){
    int esq = 0, dir = v.size() - 1;

    while(esq <= dir){
        int meio = esq + (dir - esq)/2;
        if(v[meio] == a){
            return v[meio];
        }
        if(v[meio] < a){
            esq = meio + 1;
        }
        else{
            dir = meio - 1;
        }
    }

    return -1;
}

int main(){

    int n, a, c, soma=0;
    vector<int> v;

    while(cin >> n >> a && n != 0 && a != 0){
        for(int i=0; i<n; i++){
            cin >> c;
            v.push_back(c);

            soma += v[i];
        }

        if(soma == a){
                cout << ":D" << endl;
        }
        else{
            sort(v.begin(), v.end());

            buscaBinaria(v, a);
            double aux=0.0, r;
            int x = buscaBinaria(v, a);
            //cout << "NUMERO: " << buscaBinaria(v, a) << endl;
            for(int i=0; i<v.size(); i++){
                r = v[i] - x;
                aux += r;
            }
            if(aux < a || soma < a){
                cout << "-.-" << endl;
            }
            else{
                cout << fixed << setprecision(4) << aux << endl;
            }
        }
        soma=0;
        v.clear();
    }
    
    return 0;
}