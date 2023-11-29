#include <bits/stdc++.h>

using namespace std;

int main(){

    int inter, gremio, ti=0, tg=0, i=0, g=0, empate=0, grenais=0, op;

    op = 1;

    while(op == 1){
        cin >> inter >> gremio;
        
        if(op == 1){
            if(inter == gremio){
                empate += 1;
            }
            else if(inter > gremio){
                i++;
            }
            else{
                g++;
            }
            ti += inter;
            tg += gremio;
            grenais += 1;
        }
        do{
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> op;
        }while(op != 1 && op != 2);
    }

    cout << grenais << " grenais" << endl;
    cout << "Inter:" << i << endl;
    cout << "Gremio:" << g << endl;
    cout << "Empates:" << empate << endl;
    if(ti > tg){
        cout << "Inter venceu mais" << endl;
    }
    else if(tg > ti){
        cout << "Gremio venceu mais" << endl;
    }
    else{
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}
