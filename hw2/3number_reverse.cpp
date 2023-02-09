#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int inpnum,reversed_no=0;
    cout<<"Enter the number : ";
    cin>>inpnum;
    int length_of_Num;

    // couldn't find suitable function for int length so used log to calculate it
    length_of_Num=(log10(inpnum)+1);

    int divisor=inpnum;
    for (int j = length_of_Num-1; j >= 0; j--)
    {
        reversed_no= (reversed_no+((divisor%10)*(pow(10,j))));
        divisor=divisor/10;
    }
    cout<<reversed_no;
    return 0;
}
