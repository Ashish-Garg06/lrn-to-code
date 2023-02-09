#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int inpnum;
    cout<<"Enter the number you want to check : ";
    cin>> inpnum;

    // started from 2 becuz 0,1 divide every number; loop continue till inpnum-1 bcuz inpnum will divide itself
    for (int i = 2; i <= (inpnum-1); i++)
    {
        if ((inpnum % i)==0)
        {
            cout<<inpnum<<" is not a prime num as it is divisible by "<<i<<"\n";
            break;
        }
        else if (i==(inpnum-1))
        {
            cout<<inpnum<< " is a prime number"<<"\n";
        }
        
    }
    return 0;
}
