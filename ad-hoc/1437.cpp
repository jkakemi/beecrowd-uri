#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int N;
    string passos;
    char coord[4] = {'N', 'L', 'S', 'O'};
    while(cin >> N && N != 0){
        cin >> passos;
        int i=0;
        for(int j=0; j<passos.size(); j++){
            if(passos[j] == 'D'){
                i++;
            }
            else{
                i+=3;
            }
        }

        i = i%4;

        cout << coord[i] << endl;
    }

    return 0;
}