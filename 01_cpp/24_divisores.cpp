#include<iostream>

using namespace std;

int main(){
    int x=0;

    cin >> x;

    for(int i=1; i<=x; i++){
        if(i == x){
            cout << i;
        } else if(x % i == 0){
            cout << i << " ";
        }
    }
    
    cout << "\n";

    return 0;
}