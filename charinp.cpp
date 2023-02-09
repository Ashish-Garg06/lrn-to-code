#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string name;

    cout << "enter your name : ";
    getline(cin,name);
    cout << name<<"\n";
    cout << name.length();
    return 0;
}
