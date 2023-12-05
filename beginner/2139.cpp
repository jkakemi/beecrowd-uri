#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int mes, dia;

    while(cin >> mes >> dia){
        if(mes == 12 && dia == 25){
            cout << "E natal!" << endl;
        }
        else if(mes == 12 && dia == 24){
            cout << "E vespera de natal!" << endl;
        }
        else if(mes == 12 && dia > 25){
            cout << "Ja passou!" << endl;
        }
        else{
            if(mes == 1){
                dia = 360 - dia;
            }
            else if(mes == 2){
                dia = 329 - dia;
            }
            else if(mes == 3){
                dia = 300 - dia;
            }
            else if(mes == 4){
                dia = 269 - dia;
            }
            else if(mes == 5){
                dia = 239 - dia;
            }
            else if(mes == 6){
                dia = 208 - dia;
            }
            else if(mes == 7){
                dia = 178 - dia;
            }
            else if(mes == 8){
                dia = 147 - dia;
            }
            else if(mes == 9){
                dia = 116 - dia;
            }
            else if(mes == 10){
                dia = 86 - dia;
            }
            else if(mes == 11){
                dia = 55 - dia;
            }
            else if(mes == 12){
                dia = 25 - dia;
            }
            cout << "Faltam " << dia << " dias para o natal!" << endl;
        }
    }

    
    return 0;
}