#include<iostream>

using namespace std;

int main(){
    int qtde=0, num=0, numAnt=0, cont=0, seq=0, maior=0;

    cin >> qtde;

    for(int i = 0; i < qtde; i++){
        cin >> num;

        if(i == 0){
            numAnt = num;
            cont++;
        } else if(num == numAnt){
            cont++;
        } else{
            seq = cont;
            numAnt = num;
            cont=0;
            cont++;

            if(seq > maior){
                maior = seq;
            }
        }

        if(i == (qtde - 1)){
            seq = cont;

            if(seq > maior){
                maior = seq;
            }
        }
    }

    cout << maior << endl;
    
    return 0;
}