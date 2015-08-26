#include<iostream>
#include<math.h>

using namespace std;


int main()
{
    int a,b,c;
    float hasil;
    cout <<"masukkan nilai a: ";
    cin >> a;
    cout <<"masukkan nilai b: ";
    cin >> b;
    cout <<"masukkan nilai c: ";
    cin >> c;

    if (a==b&&b!=c||a==c&&b!=c) {
        cout << "segitiga sama kaki";
    }
    if (a==b&&a==c) {
        cout << "segitiga sama sisi";
    }
    if (a!=b&&a!=c&&b!=c) {
        cout << "segitiga sembarang";
    }
    return(0);
}
