#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int cases, f1, f2, x, y;

    cin >> cases;

    while(cases--){
        cin >> f1 >> f2;

        while(f1 != 0 && f2 !=0){
            if(f1 > f2){
                f1%=f2;
            }
            else{
                f2%=f1;
            }   
        }
        if(f1!=0){
            x = f1;
        }
        else{
            x = f2;
        }

        cout << x << endl;
    }
    
    return 0;
}