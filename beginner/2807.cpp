#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n){

    if(n <= 1){
        return n;
    }
    vector<int> fib(n + 1, 0);
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}

int main() {

    vector<int> num;
    int n;

    cin >> n;

    for(int i=1; i<=n; i++){
        num.push_back(fibonacci(i));
    }

    sort(num.begin(), num.end(), greater<int>()); // Ordena decrescente

    for(int i = 0; i < num.size(); i++){
        cout << num[i];
        if(i + 1 < num.size()){
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
