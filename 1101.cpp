#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m, sum;

    cin >> n >> m;

    while(n > 0 && m > 0){
        sum=0;
        if(n > m){
            for(int i=m; i<=n; i++){
                sum += i;
                cout << i << " ";
                
            }
            cout << "Sum=" << sum << endl;
        }
        else{
            for(int i=n; i<=m; i++){
                sum += i;
                cout << i << " ";
                
            }
            cout << "Sum=" << sum << endl;
        }
        cin >> n >> m;
    }

    return 0;
}