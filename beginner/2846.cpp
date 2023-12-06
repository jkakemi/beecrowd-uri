#include <bits/stdc++.h>

using namespace std;

#define MAX 1000000

unsigned long long int fibo[MAX];
unsigned long long int fibonot[MAX];

void fibonacci(){
    
    int i, j, l;

    fibo[0] = 0;
    fibo[1] = 1;

    for(i=2; i<= MAX; i++){
        fibo[i] = fibo[i-1]+fibo[i-2];
    }
    for(i=1, j=2, l=1; i <= MAX; i++){
        if(fibo[j] != i){
            fibonot[l++] = i;
        }
        else{
            j++;
        }
    }
}

int main() {

    int n;

    fibonacci();

    cin >> n;

    cout << fibonot[n] << endl;

    return 0;
}
