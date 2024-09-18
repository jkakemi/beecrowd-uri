#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;

    while(cin >> a >> b){
        if(a == 0 && b == 0){
            break;
        }

        int soma = a + b;

        string sum = to_string(soma);
        string resultado;
        for(size_t i=0; i<sum.length(); i++){
            char c = sum[i];
            if(c != '0'){
                resultado += c;
            }
        }

        cout << resultado << endl;
    }

    return 0;
}
