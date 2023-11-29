#include <iostream>

using namespace std;

int main() {

    int n, a=0, b=1, prox;

    cin >> n;

    for(int i=0; i<n; i++){
        cout << a;

        if (i < n - 1) {
            cout << " ";
        }

        prox = a + b;
        a = b;
        b = prox;
    }
    
    cout << endl;

    return 0;
}