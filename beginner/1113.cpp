#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m;

    cin >> n >> m;

    while (n != m){
        if(n < m){
            cout << "Crescente" << endl;
            cin >> n >> m;
        }
        else{
            cout << "Decrescente" << endl;
            cin >> n >> m;
        }
    }

    return 0;
}