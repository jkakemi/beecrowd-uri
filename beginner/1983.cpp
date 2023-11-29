#include <bits/stdc++.h>

using namespace std;

int main()
{

    int quant, mat, aluno;
    double n, maior=0.0;

    cin >> quant;

    while(quant--){
        cin >> mat >> n;

        if(n > maior){
            maior = n;
            aluno = mat;
        }
    }
    
    if(maior >= 8){
        cout << aluno << endl;
    }
    else{
        cout << "Minimum note not reached" << endl;
    }


    return 0;
}