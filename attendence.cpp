#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cout << "enter total no. of  class held : ";
    cin >> a;
    cout << endl;
    cout << "enter no. of class attend : ";
    cin >> b;
    cout << endl;
    c = (b * 100) / a;
    cout << " your attendence percentage : " << c << "%" << endl;
    cout<<endl;
    if (c > 75)
    {
        cout << " you are allowed to sit in exam ." << endl;

        cout << endl;
    }
    else
    {
        cout << "you are not allowed to sit in exam ." << endl;
    }
    cout << endl;
    return 0;
}