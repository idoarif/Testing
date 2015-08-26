#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a=2,b=-3,c=1,pec;
    float x1,x2,xa;
    xa=(sqrt((b*b)-(4*a*c)));
    pec=(2*a);
    x1= (-b+xa)/pec;
    x2= (-b-xa)/pec;
    cout <<"x1 adalah: " << x1 << endl;
    cout <<"x2 adalah: " << x2 << endl;
    return(0);
}
