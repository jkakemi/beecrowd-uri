#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a=0, g=0, d=0;
    int n=0;

    do{
        cin >> n;

        if(n == 1){
            a += 1;
        }
        else if(n == 2){
            g += 1;
        }
        else if(n == 3){
            d += 1;
        }

    }while(n != 4);

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;

    return 0;
}
