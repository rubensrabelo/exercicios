#include<iostream>
#include<iomanip>
#include<cmath>
#include<vector>

using namespace std;

int main(){
    int qtde;

    cin >> qtde;

    vector<float> raizes(qtde);

    for(int i=0; i<qtde; i++){
        float num=0;

        cin >> num;

        raizes[i] = sqrt(num);
    }

    cout << fixed << setprecision(4);

    for(int i=0; i<qtde; i++){
        cout << raizes[i] << endl;
    }

    return 0;
}