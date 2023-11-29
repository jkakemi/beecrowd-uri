#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x;

    do{
        cin >> x;
        for(int i=1; i<=x; i++){
            cout << i;
            if(i%x == 0){
                cout << endl;
            }
            else{
                cout << " ";
            }
        }
    }while(x != 0);

    return 0;
}
