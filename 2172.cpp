#include <bits/stdc++.h>

using namespace std;

int main()
{

    unsigned long int n, num;

    while(true){
        cin >> n >> num;

        if(n == 0 && num == 0){
            break;
        }

        cout << n*num << endl;
    }

    return 0;
}