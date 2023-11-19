#include<iostream>

using namespace std;

int main(){
    int n=0, qtdeAcesso=0, cont=0, dias=0, atingiu=0;

    cin >> n;

    while(cont < n){
        int a=0;

        cin >> a;

        qtdeAcesso += a;
        cont++;

        if(qtdeAcesso >= 1000000 && atingiu == 0){
            dias=cont;
            atingiu=1;
        }
    }

    cout << dias << endl;
    
    return 0;
}