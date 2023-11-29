#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n[20], aux;

    for(int i=0; i<20; i++) {
        cin >> n[i];
    }

    for(int i=0; i<10; i++){
            aux = n[i];
            n[i] = n[19-i];
            n[19-i] = aux;
    }

    for(int k=0; k<20; k++){
            cout << "N[" << k << "] = " << n[k] << endl;
    }

    return 0;
}