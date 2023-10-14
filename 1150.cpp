#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x, z, soma=0, cont=1;

    cin >> x;

    do{
        cin >> z;
    }while(z <= x);

    soma = x;

    do{
        x++;
        soma += x;
        cont++;
    }while(soma <= z);
    
    cout << cont << endl;

    return 0;
}