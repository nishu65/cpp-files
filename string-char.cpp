#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n, i = 0, x, y;
    string s;
    cin >> n;
    cin >> s;
    if (n % 2 == 0)
    {
        for (i; i < n; i++)
        {
            x = s[i];
            s[i] = s[++i];
            s[i] = x;
        }
    }
    else
    {
        for (i; i < n - 1; i++)
        {
            x = s[i];
            s[i] = s[++i];
            s[i] = x;
        }
    }
    for (i=0; i < n; i++)
    {
        x = s[i];
        y = 122 - x;
        y = y + 97;
        s[i] = char(y);
    }
    cout << s << endl;

    return 0;
}