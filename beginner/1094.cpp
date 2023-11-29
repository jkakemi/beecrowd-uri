#include <bits/stdc++.h>

using namespace std;

int main(){

    char tipo;
    int n, quantia, i=0, total=0, c=0, r=0, s=0;
    double porc, porr, pors;

    cin >> n;

    while(i < n){
        cin >> quantia >> tipo;

        if(tipo == 'C'){
            c += quantia;
        }
        else if(tipo == 'R'){
            r += quantia;
        }
        else if(tipo == 'S'){
            s += quantia;
        }
        total += quantia;
        i++;
    }
    porc = (double)(c/(double)total)*100;
    porr = (double)(r/(double)total)*100;
    pors = (double)(s/(double)total)*100;

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << porc << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << porr << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << pors << " %" << endl;
    

    return 0;
}