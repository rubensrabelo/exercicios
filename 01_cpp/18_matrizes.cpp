#include<iostream>

using namespace std;

int main(){
    int m1[5][5], m2[5][5];

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> m1[i][j];
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> m2[i][j];
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout << m1[i][j] + m2[i][j];
        }
    }

    cout << "\n";

    return 0;
}