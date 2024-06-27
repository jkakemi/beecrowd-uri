#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int w, l, r;
    int i=1;

    while(cin >> r && r != 0){
        cin >> w >> l;

        float diagonal = sqrt(pow(w,2)+pow(l,2));

        if(r < (diagonal/2.0)){
            cout << "Pizza " << i << " does not fit on the table." << endl;
        }
        else{
            cout << "Pizza " << i << " fits on the table." << endl; 
        }
        i++;
    }
    
    return 0;
}