#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, m, j;

    cin >> n;

    while(n != 0){
        m=0;
        j=0;
        for(int i=0; i<n; i++){ 
            cin >> x;

            if(x == 0){
                m++;
            }
            else{
                j++;
            }
        }

        cout << "Mary won " << m << " times and John won " << j << " times" << endl;
        cin >> n;
    }
    return 0;
}