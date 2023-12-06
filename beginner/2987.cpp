#include <bits/stdc++.h>

using namespace std;

int main() {

    char alfabeto[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char letra;

    cin >> letra;

    for(int i=0; i<26; i++){
        if(alfabeto[i] == letra){
            cout << i+1 << endl;
        }
    }

    return 0;
}

// JEITO MAIS FÁCIL PELA TABELA ASCII

// #include <iostream>
 
// using namespace std;
 
// int main() {
 
//      char letra;
     
//      cin >> letra;
//      cout << letra-64 <<endl;
 
//     return 0;
// }