#include <iostream>
//#include "sum.h"
using namespace std;

int main(void)
{
    int a, b, sum=0;
    cin>>a>>b;
    for (;a<=b;a++) {
        sum=sum+a;
    }
    cout<<sum<<endl;
}
