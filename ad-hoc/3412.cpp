#include <bits/stdc++.h>

using namespace std;

int main(){

    int cases;

    cin >> cases;

    cin.ignore();
    while(cases--){
        string nome;
        string n;
        // double rec;

        getline(cin, nome);
        getline(cin, n);

        stringstream ss(n);
        vector<double> nota;
        double no;
        
        while(ss >> no){
            nota.push_back(no);
        }
        //rec = nota[3];
        double media=0.0;

        if(nota.size() == 1){
            media = nota[0]/2;
        }
        else if(nota.size() == 2){
            media = (nota[0]+nota[1])/2;
        }
        else if(nota.size() == 3){
            media = (nota[0]+nota[1]+nota[2])/3;
        }
        else if(nota.size() == 4){
            double menor = min({nota[0], nota[1], nota[2]});
            int im = min_element(nota.begin(), nota.begin()+3)-nota.begin();

            if(nota[3] > menor){
                nota[im] = nota[3];
            }

            media = (nota[0]+nota[1]+nota[2])/3;
        }


        // if (nota.size() == 4) {
        //     rec = nota[3];
        //     if (nota[0] < rec) {
        //         sort(nota.begin(), nota.begin() + 3);
        //         nota[0] = rec;
        //     }
        //     nota[3] = 0;
        // }
         
        // soma = accumulate(nota.begin(), nota.end(), 0.0);
    
        // double media;
        // if(nota.size() == 4 || nota.size() == 3){
        //     media = soma/3;
        // }
        // else if(nota.size() == 2 || nota.size() == 1){
        //     media = soma/2;
        // }

        cout << nome << ": " << fixed << setprecision(1) << media << endl;

    }

    return 0;
}