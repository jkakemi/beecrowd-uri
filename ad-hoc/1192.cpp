#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int cases, n1, n2, x;
    char letter;

    cin >> cases;

    for(int i=0; i<cases; i++){
        cin >> n1;
        cin >> letter;
        cin >> n2;
        
        if(n1 == n2){ x = n1*n2; }
        else if(isupper(letter)){ x = n2-n1; }
        else if(islower(letter)){ x = n2+n1; }
        cout << x << endl;
    }
    return 0;
}