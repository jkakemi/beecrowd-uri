#include <bits/stdc++.h>

using namespace std;

void encontrar_padrao(string texto, string padrao)
{
    int i, j;
    int textoSize = texto.length();
    int padraoSize = padrao.length();
    for (i = 0, j = 0; i < textoSize && j < padraoSize; i++)
    {
        if (texto[i] == padrao[j])
        {
            j++;
        }
    }
    if (j == padraoSize)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{

    int n, q;
    string texto, padrao;

    cin >> n;

    while (n--)
    {
        cin >> texto;
        cin >> q;
        while (q--)
        {
            cin >> padrao;
            encontrar_padrao(texto, padrao);
        }
    }

    return 0;
}

// MÉTODO RABIN-KARP - Não funcional no Beecrowd.

// #include <bits/stdc++.h>

// #define d 256

// using namespace std;

// void rabin_karp(string texto, string padrao, int primo){
//     bool achou = false;
//     int m = padrao.length();
//     int n = texto.length();
//     int i, j, p=0, t=0, h=1;

//     for(i=0; i<m-1; i++){
//         h = (h*d)%primo;
//     }

//     for(i=0; i<m; i++){
//         p = (d*p+padrao[i])%primo;
//         t = (d*t+texto[i])%primo;
//     }

//     for(i=0; i<=n-m;i++){
//         if(p == t){
//             for(j=0; j<m; j++){
//                 if(texto[i+j] != padrao[j]){
//                     break;
//                 }
//             }
//             if(j == m){
//                 achou = true;
//                 break;
//             }
//         }
//         if(i < n-m){
//             t = (d*(t-texto[i]*h)+texto[i+m])%primo;
//             if(t<0){
//                 t = t+primo;
//             }
//         }
//     }
//     if(achou){
//         cout << "Yes" << endl;
//     }
//     else{
//         cout << "No" << endl;
//     }

// }

// int main() {

//     int n, q, primo=101;
//     string texto, padrao;
//     map<char, char> m;

//     cin >> n;

//     while(n--){
//         cin >> texto;
//         cin >> q;
//         for(int i=0; i<q; i++){
//             cin >> padrao;
//             rabin_karp(texto, padrao, primo);
//         }
//     }

//     return 0;
// }