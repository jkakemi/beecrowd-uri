#include <bits/stdc++.h>

using namespace std;

int main(){

    int x;

    cin >> x;

    int r = x*x;

    if(x%2==0){
        cout << r/2 << " casas brancas e " << r/2 << " casas pretas" << endl;
    }
    else{
        cout << (r/2)+1 << " casas brancas e " << r/2 << " casas pretas" << endl;
    }

    return 0;
}