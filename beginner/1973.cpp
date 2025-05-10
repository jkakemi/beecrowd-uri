#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int cases;
    long long soma=0;
    cin >> cases;
    vector<int> carneiros;
    while(cases--){
        int c;
        cin >> c;
        carneiros.push_back(c);
        soma += c;
    }

    int numCarneiros = carneiros.size();
    int i=0;
    long long roubado=0, atacado=0;
    vector<bool> visitado(numCarneiros, false);
    while (i >= 0 && i < numCarneiros){
        if(!visitado[i]){
            ++atacado;
        }
        visitado[i] = true;

        if(carneiros[i]%2!=0){
            ++roubado, --carneiros[i], ++i; 
        }
        else{
            if(carneiros[i]){
                ++roubado, --carneiros[i];
            }
            i--;
        }
    }

    cout << atacado << " " << soma - roubado << endl;

    return 0;
}