#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, cont=0;
    int pa, pb, anos, cresc;
    double g1, g2;

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> pa >> pb >> g1 >> g2;
            while(pa <= pb && cont < 101){
                pa += (int)((pa*g1)/100);
                pb += (int)((pb*g2)/100);
                cont++;
            }
            if(cont > 100){
                cout << "Mais de 1 seculo." << endl;
            }
            else{
                cout << cont << " anos." << endl;
            }
            cont=0;
    }
    
    return 0;
}