#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, x, y, soma;

    cin >> n;

    while(n--){
        cin >> x >> y;

        soma=0;
        if(x%2 == 0){
            x++;
        }
        for(int i=0; i<y; i++){
            soma += x;
            x += 2;
        }

        cout << soma << endl;
    }
    
    return 0;
}