#include <bits/stdc++.h>

using namespace std;

int main(){

    int pulo, numCanos;

    vector<int> canos;

    cin >> pulo >> numCanos;

    while(numCanos--){
        int n;
        cin >> n;
        canos.push_back(n);
        
    }
    bool flag = true;
    for(int i=0; i<canos.size()-1; i++){
        if(abs(canos[i]-canos[i+1]) <= pulo){
            flag = true;
        }
        else{
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "YOU WIN" << endl;
    }   
    else{
        cout << "GAME OVER" << endl;
    }

    return 0;
}