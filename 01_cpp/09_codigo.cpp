#include<iostream>
#include<vector>

using namespace std;

int main(){
    int qtde = 0;
    cin >> qtde;

    vector<int> valor(qtde);

    for(int i = 0; i<qtde; i++){
        cin >> valor[i];
    }

    int cont = 0;

    for(int i = 0; i<qtde-2; i++){
        if((valor[i] == 1) && (valor[i + 1] == 0) && (valor[i + 2] == 0)){
                    cont++;
        }
    }

    cout << cont << endl;

    return 0;
}