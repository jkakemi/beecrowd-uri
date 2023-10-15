#include <bits/stdc++.h>

using namespace std;

int main()
{

    int aba, acao;
    string atual;

    cin >> aba >> acao;

    for(int i=0; i<acao; i++){
        cin >> atual;

        if(atual == "fechou"){
            aba += 1;
        }
        else if(atual == "clicou"){
            aba -= 1;
        }
    }

    cout << aba << endl;

    return 0;
}