#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    double a, b, c, d, media=0, notaexame, soma=0;

    cin >> a >> b >> c >> d;

    media = ((a*2)+(b*3)+(c*4)+(d*1))/10.0;

    cout << "Media: " << fixed << setprecision(1) << media << endl;
    if(media >= 7.0){
        cout << "Aluno aprovado." << endl;
    }
    if(media < 5.0){
        cout << "Aluno reprovado." << endl;
    }
    if(media >= 5.0 && media < 7.0){
        cout << "Aluno em exame." << endl;
        cin >> notaexame;
        cout << "Nota do exame: " << fixed << setprecision(1) << notaexame << endl;
        soma = (notaexame + media)/2.0;
        if(soma >= 5.0){
            cout << "Aluno aprovado." << endl;
        }
        else{
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << fixed << setprecision(1) << soma << endl;
    }
    return 0;
}