#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    while(cin >> n){
        int mat[15][15];
        if(n == 1){
            cout << "1" << "\n\n";
        }else{
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    // if(i==0 && j==0){
                    //     mat[i][j] = 1;
                    // }else{
                        mat[i][j] = j+1;
                        cout << mat[i][j] << " ";
                    //}
                }
            }
        }
    }

    return 0;
}