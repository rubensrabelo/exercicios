#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    double x=0, y=0;

    cin >> x >> y;

    double pot = pow(x, y);

    cout << fixed << setprecision(4);

    cout << pot << endl;

    return 0;
}