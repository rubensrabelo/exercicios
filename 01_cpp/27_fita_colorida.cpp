#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
    int qtde;

    cin >> qtde;

    vector<int> fita(qtde);
    vector<int> novaFita(qtde);

    for(int i=0; i<qtde; i++){
        cin >> fita[i];
    }

    for(int i=0; i<qtde; i++){
        int distEsq=0, distDir=0, zero1=0, zero2=0;

        if(fita[i] == 0){
            novaFita[i] = 0;
            continue;
        }
        
        for(int j=i+1; j<qtde; j++){
            if(fita[j] != 0){
                distDir++;
            } else{
                distDir++;
                zero1=1;
                break;
            }
        }

        for(int j=i-1; j>=0; j--){
            if(fita[j] != 0){
                distEsq++;
            } else{
                distEsq++;
                zero2=1;
                break;
            }
        }

        if(distEsq == 0){
            novaFita[i] = distDir;
        } else if(distDir == 0){
            novaFita[i] = distEsq;
        } else {
            if(zero1 == 0){
                novaFita[i] = distEsq;
            } else if (zero2 == 0){
                novaFita[i] = distDir;
            } else{
                novaFita[i] = min(distEsq, distDir);
            }
        }
    }

    for(int i=0; i<qtde; i++){
        if(novaFita[i] > 9){
            novaFita[i] = 9;
        }
    }

    for(int i=0; i<qtde; i++){
        if(i == (qtde - 1)){
            cout << novaFita[i];
            break;
        }

        cout << novaFita[i] << " ";
    }

    cout << "\n";

    return 0;
}