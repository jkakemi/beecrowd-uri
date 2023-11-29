#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m;

    cin >> n >> m;

    while(n != 0 && m != 0){
        if(n > 0 && m > 0){
            cout << "primeiro" << endl;
        }
        else if(n < 0 && m > 0){
            cout << "segundo" << endl;
        }
        else if(n < 0 && m < 0){
            cout << "terceiro" << endl;
        }
        else{
            cout << "quarto" << endl;
        }
        cin >> n >> m;
    }

    return 0;
}