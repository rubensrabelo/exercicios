#include<iostream>

using namespace std;

int main(){
    int qtde;

    cin >> qtde;

    int vetor[qtde];

    for(int i=0; i<qtde; i++){
        cin >> vetor[i];
    }

    for(int i=0; i<qtde; i++){
        cout << vetor[i] << " ";
    }

    cout << "\n";

    return 0;
}