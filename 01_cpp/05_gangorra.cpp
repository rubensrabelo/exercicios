#include<iostream>

using namespace std;

int main(){
    int p1, p2, c1, c2;

    cin >> p1 >> c1 >> p2 >> c2;

    int equiv = p1 * c1 - p2 * c2;

    if(equiv == 0){
        cout << "0" << endl;
    } else if (equiv < 0){
        cout << "1" << endl;
    } else{
        cout << "-1" << endl;
    }

    return 0;
}