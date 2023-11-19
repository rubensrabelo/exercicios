#include<iostream>
#include<vector>

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
        int distEsq=0, distDir=0;

        if(fita[i] == 0){
            novaFita[i] = 0;
            continue;
        }
        
        if(i == 0){

            for(int j=i+1; j<qtde; j++){
                if(fita[j] != 0){
                    distDir++;
                } else{
                    distDir++;
                    novaFita[i] = distDir;
                    break;
                }

                continue;
            }
        }else if(i == (qtde - 1)){

            for(int j=i-1; j>=0; j--){
                if(fita[j] != 0){
                    distEsq++;
                } else{
                    distEsq++;
                    novaFita[i] = distEsq;
                    break;
                }

                continue;
            }
        } else{

            for(int j=i-1; j>=0; j--){
                if(fita[j] != 0){
                    distEsq++;
                } else{
                    distEsq++;
                    break;
                }
            }

            for(int j=i+1; j<qtde; j++){
                if(fita[j] != 0){
                    distDir++;
                } else{
                    distDir++;
                    break;
                }
            }

            // O Problema está quando um deles é zero

            if(distEsq == 0){
                novaFita[i] = distEsq;
            } else if(distDir == 0){
                novaFita[i] = distDir;
            } else if(distEsq > distDir){
            novaFita[i] = distEsq;
            } else{
                novaFita[i] = distDir;
            }
        }

    }

    for(int i=0; i<qtde; i++){
        cout << novaFita[i] << endl;
    }

    return 0;
}