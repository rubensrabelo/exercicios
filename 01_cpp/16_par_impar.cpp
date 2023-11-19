#include<iostream>

using namespace std;

int main(){
    int bino=0, cino=0;

    cin >> bino >> cino;

    int soma = bino + cino;

    if(soma % 2 == 0){
        cout << "Bino" << endl;
    } else{
        cout << "Cino" << endl;
    }

    return 0;
}