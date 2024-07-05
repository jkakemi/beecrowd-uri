#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int cases, i=1;

    cin >> cases;

    while(cases--){
        string sheldon, raj;

        cin >> sheldon >> raj;

        cout << "Caso #" << i << ": ";
        if(sheldon == raj){
            cout << "De novo!" << endl;
        }
        else if((sheldon == "tesoura" && (raj == "papel" || raj == "lagarto")) ||
        (sheldon == "papel" && (raj == "pedra" || raj == "Spock")) ||
        (sheldon == "pedra" && (raj == "lagarto" || raj == "tesoura")) ||
        (sheldon == "lagarto" && (raj == "Spock" || raj == "papel")) ||
        (sheldon == "Spock" && (raj == "tesoura" || raj == "pedra")) ||
        (sheldon == "tesoura" && raj == "papel")){
            cout << "Bazinga!" << endl;
        }
        else{
            cout << "Raj trapaceou!" << endl;
        }

        i++;
    }
    
    return 0;
}