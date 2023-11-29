<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int real, resp[5], cont=0;

    cin >> real;

    for(int i=0; i<5; i++){
        cin >> resp[i];

        if(resp[i] == real){
            cont++;
        }
    }

    cout << cont << endl;

    return 0;
=======
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int real, resp[5], cont=0;

    cin >> real;

    for(int i=0; i<5; i++){
        cin >> resp[i];

        if(resp[i] == real){
            cont++;
        }
    }

    cout << cont << endl;

    return 0;
>>>>>>> 2e77d1c951fd95f3d606f2c18800c9557d3ec5f5
}