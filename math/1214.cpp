#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int cases, n, k, cont=0;
    vector<int> nota;
    double soma=0.0, media=0.0, perc=0.0;

    cin >> cases;

    while(cases--){
        cin >> n;

        for(int i=0; i<n; i++){
            cin >> k;
            nota.push_back(k);
            soma += k;
        }

        media = soma/n;

        for(const auto& n : nota){
            if(n > media){
                cont++;
            }
        }

        perc = ((double)cont/n)*100.0;

        cout << fixed << setprecision(3) << perc << "%" << endl;

        nota.clear();
        soma=0.0;
        media=0.0;
        cont=0;
    }
    
    return 0;
}