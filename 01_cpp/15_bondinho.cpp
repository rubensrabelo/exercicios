#include<iostream>

using namespace std;

int main(){

    int A=0, M=0;

    cin >> A >> M;

    int soma = A + M;

    if(soma <= 50){
        cout << "S" << endl;
    } else{
        cout << "N" << endl;
    }
    
    return 0;
}