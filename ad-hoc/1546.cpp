#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases, n, k;

    cin >> cases;

    while(cases--){
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> k;

            if(k == 1){
                cout << "Rolien" << endl;
            }
            else if(k == 2){
                cout << "Naej" << endl;
            }
            else if(k == 3){
                cout << "Elehcim" << endl;
            }
            else if(k == 4){
                cout << "Odranoel" << endl;
            }
        }
    }

    return 0;
}