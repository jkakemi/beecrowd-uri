#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, soma=0;

    cin >> n;

    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        soma = 0;
        if(x < y){
            for(int j=x+1; j<y; j++){
                if(j%2 != 0){
                    soma += j;
                }
            }
        }
        else{
            for(int j=y+1; j<x; j++){
                if(j%2 != 0){
                    soma += j;
                }
            }
        }
        cout << soma << endl;
    }

    return 0;
}
