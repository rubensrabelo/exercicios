#include<iostream>

using namespace std;

int main(){
    int n = 0;

    cin >> n;

    int cont=0, qtde=0;

    while(cont < n){
        int l=0, c=0;

        cin >> l >> c;

        if(l > c){
            qtde += c;
        } 

        cont++;
    }

    cout << qtde << endl;

    return 0;
}