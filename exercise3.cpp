#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int angka,pangkat,i;
    float hasil;
    cout << "masukkan angka: ";
    cin >> angka;
    cout << "masukkan pangkat: ";
    cin >> pangkat;

    hasil=1;
    for (i=1;i<=pangkat;i++) {
        hasil=hasil*angka;
    }
    cout << "hasilnya adalah: " << hasil;
    return(0);
}
