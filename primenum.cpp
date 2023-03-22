#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long inpnum;
    cout << "Enter the number you want to check : ";
    cin >> inpnum;

    bool isPrime = true;

    if (inpnum <= 1)
    {
        isPrime = false;
    }
    else if (inpnum == 2)
    {
        isPrime = true;
    }
    else if ((inpnum % 2) == 0)
    {
        isPrime = false;
        cout << inpnum << " is not a prime num as it is divisible by 2 "
             << "\n";
    }
    // if it is not divisible by 2 it is not divisible by any even no
    else
    {
        for (long long i = 3; i <= sqrt(inpnum); i += 2)
        {
            if ((inpnum % i) == 0)
            {
                isPrime = false;
                cout << inpnum << " is not a prime num as it is divisible by " << i << "\n";
                break;
            }
        }
    }

    if (isPrime)
    {
        cout << inpnum << " is a prime number"
             << "\n";
    }

    return 0;
}