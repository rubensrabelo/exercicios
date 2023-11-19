#include<iostream>
#include<vector>

using namespace std;

int main(){
    int qtde;

    cin >> qtde;

    vector<int> tab(qtde);
    vector<int> novoTab(qtde);

    for(int i=0; i<qtde; i++){
        cin >> tab[i];
    }

    for(int i=0; i<qtde; i++){
        if(i == 0){
           if((tab[i] == 1) && (tab[i+1] == 1)){
            novoTab[i] = 2;
           } else if ((tab[i] == 1) || (tab[i+1] == 1)){
            novoTab[i] = 1;
           } else {
            novoTab[i] = 0;
           }
        } else if(i == (qtde - 1)){
           if((tab[i] == 1) && (tab[i-1] == 1)){
            novoTab[i] = 2;
           } else if ((tab[i] == 1) || (tab[i-1] == 1)){
            novoTab[i] = 1;
           } else {
            novoTab[i] = 0;
           }
        } else{
            if((tab[i-1] == 1) && (tab[i] == 1) && (tab[i+1] == 1)){
            novoTab[i] = 3;
           } else if (((tab[i-1] == 1) && (tab[i] == 1) && (tab[i+1] == 0)) || ((tab[i-1] == 0) && (tab[i] == 1) && (tab[i+1] == 1))){
            novoTab[i] = 2;
           } else if ((tab[i-1] == 1) && (tab[i+1] == 1)){
            novoTab[i] = 2;
           } else if ((tab[i-1] == 1) || (tab[i] == 1) || (tab[i+1] == 1)){
            novoTab[i] = 1;
            }else{
            novoTab[i] = 0;
           }
        }
    }

    for(int i=0; i<qtde; i++){
        cout << novoTab[i] << endl;
    }

    return 0;
}