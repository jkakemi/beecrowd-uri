#include <bits/stdc++.h>

using namespace std;

int main()
{

    int j=1;
    
    for(double i=0; i<=2.1; i+=0.2){
            cout << "I=" << i << " " <<  "J=" << j+i << endl;
            cout << "I=" << i << " " <<  "J=" << j+i+1 << endl;
            cout << "I=" << i << " " <<  "J=" << j+i+2 << endl;
    }

    return 0;
}
