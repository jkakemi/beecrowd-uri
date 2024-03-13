#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x, y, t=0, i=1;
    double sumx=0.0, sumy=0.0, div=0.0;
    map<int, int> v;

    while(cin >> n && n != 0){
        v.clear();
        for(int i=0; i<n; i++){
            cin >> x >> y;

            sumx+=x;
            sumy+=y;
            div = y/x;
            v[div] += x;
        }
    
        map<int, int>::iterator it; // COMEÇA A ITERAR TIPO UM LOOP NORMAL
        cout << "Cidade# " << i << ":" << endl;
        for(it=v.begin(); it!=v.end(); ++it){
            cout << it->second << "-" << it->first << " ";
        }
        i++;
        cout << endl;

        double media = sumy/sumx;
        cout << "Consumo medio: " << fixed << setprecision(2) << trunc(media*100)/100 << " m3." << endl;
        media=0.0;
        sumx=0.0;
        sumy=0.0;
    }

// x é o numero de pessoas sendo o valor
// y é o consumo total sendo a chave
    return 0;
}