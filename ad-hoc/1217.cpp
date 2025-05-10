#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases;
    double valorGasto;
    string f;
    double soma=0.0;
    vector<string> frutas;
    cin >> cases;
    int i=0;
    int cont=0;
    while(cases--){
        cin >> valorGasto;
        cin.ignore();
        getline(cin, f);

        soma += valorGasto; 

        stringstream stream(f);
        string palavra;
        while(stream >> palavra){
            frutas.push_back(f);
            cont++;
        }

        cout << "day " << i+1 << ": " << frutas.size()  << " kg" << endl;
        i++;
        frutas.clear();
    }
    double kgMedia = (double)cont/i;
    double media = soma/i;
    cout << fixed << setprecision(2) << kgMedia << " kg by day" << endl;
    cout << "R$ " << fixed << setprecision(2) << media << " by day" << endl;

    return 0;
}