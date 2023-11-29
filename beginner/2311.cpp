<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    double nota[7], maior=0.0, menor=10.0, gd, soma=0.0;
    string nome;

    cin >> n;

    while(n--){
        cin >> nome;
        cin >> gd;
        soma=0.0;
        maior=0.0;
        menor=10.0;
        for(int i=0; i<7; i++){
            cin >> nota[i];
            if(nota[i] > maior){
                maior = nota[i];
            }
            if(nota[i] < menor){
                menor = nota[i];
            }
        }
        for(int i=0; i<7; i++){
            if(nota[i] != maior && nota[i] != menor){
                soma += nota[i];
            }
        }
        cout << nome << " " << fixed << setprecision(2) << soma*gd << endl;
    }


    return 0;
}
=======
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    double nota[7], maior=0.0, menor=10.0, gd, soma=0.0;
    string nome;

    cin >> n;

    while(n--){
        cin >> nome;
        cin >> gd;
        soma=0.0;
        maior=0.0;
        menor=10.0;
        for(int i=0; i<7; i++){
            cin >> nota[i];
            if(nota[i] > maior){
                maior = nota[i];
            }
            if(nota[i] < menor){
                menor = nota[i];
            }
        }
        for(int i=0; i<7; i++){
            if(nota[i] != maior && nota[i] != menor){
                soma += nota[i];
            }
        }
        cout << nome << " " << fixed << setprecision(2) << soma*gd << endl;
    }


    return 0;
}
>>>>>>> 2e77d1c951fd95f3d606f2c18800c9557d3ec5f5
