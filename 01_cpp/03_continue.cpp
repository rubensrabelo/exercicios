#include<iostream>

using namespace std;

int main(){
    double radius;

    cin >> radius;

    double pi = 3.14159;

    cout.precision(2);
    cout.setf(ios::fixed);

    double area = pi * radius * radius;

    cout << "A area e " << area << endl;

    return 0;
}