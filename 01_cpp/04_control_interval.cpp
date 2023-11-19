#include<iostream>

using namespace std;

int main(){
    int num;

    cin >> num;

    if(num >= 5 && num <= 10){
        cout << "Esta dentro do intervalo" << endl;
    } else{
        cout << "Nao esta no intervalo" << endl;
    }

    return 0;
}