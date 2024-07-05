#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int hi, mi, hf, mf;

    cin >> hi >> mi >> hf >> mf;

    mi += hi*60;
    mf += hf*60;

    int tempo = mf-mi;
    if(tempo <= 0){
        tempo += 24*60;
    }

    int h = tempo/60;
    int m = tempo%60;

    cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;

    return 0;
}