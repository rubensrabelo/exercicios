#include<iostream>

using namespace std;

int main(){
    int n1=0, n2=0, media=0;

    cin >> n1 >> n2;

    media = (n1 + n2)/2;

    if(media >= 7){
        cout << "Aprovado" << endl;
    } else if(media < 4){
        cout << "Reprovado" << endl;
    } else{
        cout << "Recuperacao" << endl;
    }
    
    return 0;
}