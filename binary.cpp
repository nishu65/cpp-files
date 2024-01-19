// BINARY........................................
#include <iostream>
#include "power.h" // use pow(a,b)..for power 
using namespace std;
//OCTAL TO BINARY ..................................................................
static int i=0;
int rec(int a)
{
    int b = a;
    int rem;
    if (a == 1)
    {
        cout << 1;
    }
    else
    {
        rec(b / 2);
        rem = a % 2;
        cout << rem;
    }
}
//BINARY TO OCTAL...............................................................
int deci(int a)
{
    int x=0;
    if(a==1){
        return a*pow(2,i);
    }
    x=a%10;
    a=a/10;
    return (x*pow(2,i)+deci(a));

}
//MAIN.........................................................................
int main()
{
    int a;
    cout << "ENTER A NO. :";
    cin >> a;
    // bin(a);
    cout << "BINARY :";
    //rec(a);
   cout<<deci(a);
    return 0;
}