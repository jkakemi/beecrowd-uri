#include <bits/stdc++.h>

using namespace std;

int mdc(int x, int y){
    if(y == 0){
        return x;
    }
    return mdc(y, x%y);
}

pair<int, int> simplificado(pair<int, int> fracao){
    int d = mdc(abs(fracao.first), abs(fracao.second));
    return {fracao.first / d, fracao.second / d};
}

int main(){

    int n1, n2, d1, d2;
    string operacao, f1, f2;
    int cases;
    pair<int, int> r;
    vector<pair<int, int>> resultado;
    vector<pair<int, int>> original;

    cin >> cases;

    while(cases--){
        cin >> n1 >> f1 >> d1 >> operacao >> n2 >> f2 >> d2;

        pair<int, int> f1 = {n1, d1};
        pair<int, int> f2 = {n2, d2};

        int numerador, denominador;

        if(operacao == "+"){
            numerador = (f1.first * f2.second + f2.first * f1.second);
            denominador = (f1.second * f2.second); 
        }
        else if(operacao == "-"){
            numerador = (f1.first * f2.second - f2.first * f1.second);
            denominador = (f1.second * f2.second);
        }
        else if(operacao == "*"){
            numerador = f1.first * f2.first;
            denominador = f1.second * f2.second;
        }
        else if(operacao == "/"){
            numerador = f1.first*f2.second;
            denominador = f2.first*f1.second;
        }
        original.push_back(make_pair(numerador, denominador));
        r = {numerador, denominador};
        r = simplificado(r);
        resultado.push_back(r);
    }
    // size_t para tamanho de vetores, indices de objetos
    for(size_t i=0; i<resultado.size(); i++){
        cout << original[i].first << "/" << original[i].second << " = " << resultado[i].first << "/" << resultado[i].second << endl;
    }

    return 0;
}