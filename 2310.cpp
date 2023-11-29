<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, saque, block, ataque, s, b, a;
    double t1=0.0, t2=0.0, t3=0.0, s1=0.0, s2=0.0, s3=0.0;
    string nome;

    cin >> n;

    while(n--){
        cin >> nome;
        cin >> saque >> block >> ataque;
        cin >> s >> b >> a;

        t1 += saque;
        t2 += block;
        t3 += ataque;
        s1 += s;
        s2 += b;
        s3 += a;

    }

    cout << "Pontos de Saque: " << fixed << setprecision(2) << (s1*100)/t1 << " %." << endl;
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << (s2*100)/t2 << " %." << endl;
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << (s3*100)/t3 << " %." << endl;


    return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, saque, block, ataque, s, b, a;
    double t1=0.0, t2=0.0, t3=0.0, s1=0.0, s2=0.0, s3=0.0;
    string nome;

    cin >> n;

    while(n--){
        cin >> nome;
        cin >> saque >> block >> ataque;
        cin >> s >> b >> a;

        t1 += saque;
        t2 += block;
        t3 += ataque;
        s1 += s;
        s2 += b;
        s3 += a;

    }

    cout << "Pontos de Saque: " << fixed << setprecision(2) << (s1*100)/t1 << " %." << endl;
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << (s2*100)/t2 << " %." << endl;
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << (s3*100)/t3 << " %." << endl;


    return 0;
}
>>>>>>> 2e77d1c951fd95f3d606f2c18800c9557d3ec5f5
