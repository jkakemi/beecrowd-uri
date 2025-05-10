#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5+10;

int N, C, T;
int p[MAX];

bool possivel(long long chute){
    int comp = 1;
    long long resta = T*chute;
    for(int i=0; i<N; i++){
        if(resta >= p[i]) resta -= p[i];
        else{
            comp++;
            resta = T*chute;
            i--;
        }
        if(comp > C) return 0;
    }
    return 1;
}

int main(){

    cin >> N >> C >> T;

    for(int i=0; i<N; i++) cin >> p[i];

    int l = 0, r = 1e9;
    while(l < r){
        int m = (l+r)/2;

        if(!possivel(m)) l = m+1;
        else r = m;

    }

    cout << l << endl;


    return 0;
}