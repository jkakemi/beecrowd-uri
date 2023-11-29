#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, soma;

    do{
        cin >> n;
        soma=0;

        if(n == 0){
            break;
        }
        if(n%2 != 0){
            n++;
        }
        for(int i=0; i<5; i++){
            soma += n;
            n += 2;
        }

        cout << soma << endl;

    }while(n != 0);
    
    return 0;
}