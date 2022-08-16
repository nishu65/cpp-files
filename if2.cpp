#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "enter marks : ";
    cin >> a;
    cout << endl;
    if (a >= 80)
    {
        cout << "grade A " << endl;
    }
    else if (a >= 25 && a < 45)
    {
        cout << "grade E" << endl;
    }
    else if (a >= 45 && a < 50)
    {
        cout << "grade D" << endl;
    }
    else if (a >= 50 && a < 60)
    {
        cout << "grade C" << endl;
    }
    else if (a >= 60 && a < 80)
    {
        cout << "grade B" << endl;
    }
    else
    {
        cout << "grade F " << endl;
    }
}