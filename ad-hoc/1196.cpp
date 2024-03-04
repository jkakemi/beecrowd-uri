#include <bits/stdc++.h>

using namespace std;

int main() {
    
    char letters[48] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char l;
    
    while((l = getchar()) != EOF) {
        for(int i = 0; i < 48; i++) {
            if(l == letters[i]) {
                cout << letters[i-1];
                break;
            }
            else if(l == ' ') {
                cout << " ";
                break;
            }
            else if(l == '\n') {
                cout << endl;
                break;
            }
        }
    }

    return 0;
}
