#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, d;

    while(cin >> n >> d && n != 0 && d != 0){
        string numero;
        cin >> numero;

        int deixar = n-d;
        string resultado;
        int retirado = 0;

        for(char num : numero){
            while(!resultado.empty() && retirado < d && resultado.back() < num){
                resultado.pop_back();
                retirado++;
            }
            resultado.push_back(num);
        }

        while(retirado < d){
            resultado.pop_back();
            retirado++;
        }

        cout << resultado.substr(0, deixar) << endl;
    }

    return 0;
}

// 3759