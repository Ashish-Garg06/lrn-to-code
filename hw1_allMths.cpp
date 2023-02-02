#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    float a, b;

    cout << "Enter First Number :";
    cin >> a;
    cout << "Enter Second Number :";
    cin >> b;

    cout << a << " + " << b << " = " << a + b << "\n";
    cout << a << " - " << b << " = " << a - b << "\n";
    cout << a << " x " << b << " = " << a * b << "\n";
    cout << a << " / " << b << " = " << a /b << "\n";
    cout << "Remainder after " << a << " is divided by " << b << " = " <<int(a) % int(b) << "\n";

    cout<< a<<" raised to power "<< b<<" = "<<double(pow(a,b))<<'\n';
    cout<< b<<" raised to power "<< a<<" = "<<double(pow(b,a))<<"\n";

    cout<<"Square Root Of "<<a<<" = "<< sqrt(a)<<"\n";
    cout<<"Square Root Of "<<b<<" = "<< sqrt(b)<<"\n";
    return 0;
}
