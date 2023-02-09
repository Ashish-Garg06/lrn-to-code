#include <iostream>
#include <string>
using namespace std;

int main()
{
    string inpstr;
    int length_of_str;

    cout<<"Enter the string the check for palindrome : ";

    getline(cin, inpstr);
    length_of_str= inpstr.length();

    char reversed_str[length_of_str];
    string reversed_string;

    for (int i = 0; i < length_of_str; i++)
    {
        reversed_str[(length_of_str)-i]=inpstr[i];
    }
    
    for (int j = 0; j < length_of_str; j++)
    {
        reversed_string= reversed_string+ reversed_str[j+1];
    }
    
    if ((inpstr.compare(reversed_string))==0)
    {
        cout<<inpstr<<" is a palindrome"<<"\n";
    }

    else
    {
        cout<<inpstr<< " is not a palindrome as '"<<inpstr<< "' is different from '"<<reversed_string<<"' \n";
    }
    
    
    return 0;
}
