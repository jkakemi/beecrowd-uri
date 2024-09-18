#include <bits/stdc++.h>

using namespace std;

int main(){

    int nota, moeda;
    int conjM[] = {50, 25, 10, 5, 1};
    int conjN[] = {100, 50, 20, 10, 5, 2};

    scanf("%d.%d", &nota, &moeda);

    int qtd;
    cout << "NOTAS:\n"; 
    for(int i=0; i<6; i++){
        qtd = nota/conjN[i];
        nota = nota%conjN[i];
        cout << qtd << " nota(s) de R$ " << conjN[i] << ".00" << endl;
    }

    cout << "MOEDAS:\n";
    cout << nota << " moeda(s) de R$ 1.00" << endl;
    
    for(int i=0; i<5; i++){
        qtd = moeda/conjM[i];
        moeda = moeda%conjM[i];
        cout << qtd << " moeda(s) de R$ " << fixed << setprecision(2) << (double)conjM[i]/100 << endl;
    }   

    return 0;
}