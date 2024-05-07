#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i=0,x,y;
    string s;
    cin>>s;
    for (i; i < 4; i++)
    {
        x = s[i];
        y = 122 - x;
        y = y + 97;
        s[i] = char(y);
    }
    cout<<s;
}