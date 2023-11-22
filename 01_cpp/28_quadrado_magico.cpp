#include<iostream>

using namespace std;

int main(){
    int n=0, numMagico=0, diagonalSec=0;

    cin >> n;

    int mtr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int num=0;

            cin >> num;

            if(num > 0 && num < 1000){
                mtr[i][j] = num;

                if(i == j){
                numMagico += num;
                }

                if(i+j+2 == n+1){
                    diagonalSec += num;
                }
            }
        }
    }


    int igualLinha=0, somaLinha=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            somaLinha += mtr[i][j];
        }

        if(somaLinha == numMagico){
            igualLinha = 1;
        } else {
            igualLinha = 0;
            break;
        }

        somaLinha = 0;
    }

    if(igualLinha == 0){
        cout << "-1" << endl;
    } else{
        int somaColuna=0, igualCol=0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                somaColuna += mtr[j][i];
            }

            if(somaColuna == numMagico){
                igualCol = 1;
            } else {
                igualCol = 0;
                break;
            }

            somaColuna = 0;
        }

        if(igualCol == 0){
            cout << "-1" << endl;
        } else{
            if(numMagico == diagonalSec){
                cout << numMagico << endl;
            } else{
                cout << "-1" << endl;
            }
        }
    }

    return 0;
}