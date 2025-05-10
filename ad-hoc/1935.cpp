#include <bits/stdc++.h>

using namespace std;

int main(){

    long long int n, b;

    vector<long long int> dx = {0, 1, 0, -1};
    vector<long long int> dy = {1, 0, -1, 0};

    cin >> n >> b;

    vector<vector<long int>> mat(n, vector<long int>(n, 0));
    long long int x=0, y=0, direcao=0, posx=0, posy=0;

    long long int linha=n, coluna=n;
    vector<vector<bool>> visitado(linha, vector<bool>(coluna, false));

    for(long long int i=0; i<n*n; i++){
        //cout << mat[x][y] << " ";
            visitado[x][y] = true;

            long long int nx = x + dx[direcao];
            long long int ny = y + dy[direcao];

            b--;

            if(b == 0){
                posx = x+1;
                posy = y+1;
                break;
            }

            if(nx >= 0 && nx < linha && ny >= 0 && nx < coluna && !visitado[nx][ny]){
                x = nx;
                y = ny;

            }
            else{
                direcao = (direcao+1)%4;
                x+=dx[direcao];
                y+=dy[direcao];
            }
    }

    cout << posx << " " << posy << endl;



    return 0;
}

