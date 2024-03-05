#include <bits/stdc++.h>

using namespace std;

int main() {

    int p, q, j=0, k=0;

    cin >> p;

    for(int i=0; i<p; i++){
        cin >> q;

        if(q == 0){
            k++;
        }
        else{
            j++;
        }
    }

    if(k > j){
        cout << "Y" << endl;
    }
    else{
        cout << "N" << endl;
    }

    return 0;
}