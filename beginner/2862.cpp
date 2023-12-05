#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, number;
    
    cin >> n;

    while(n--){
        cin >> number;

        if(number > 8000){
            cout << "Mais de 8000!" << endl;
        }
        else{
            cout << "Inseto!" << endl;
        }
    }

    return 0;
}