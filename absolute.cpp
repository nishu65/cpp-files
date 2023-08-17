#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter a no . : ";
    cin >> a;
    cout << endl;
    if (a < 0)
    {
        a = a * (-1);
    }
    cout << " absolute value : " << a << endl;
    return 0;
}