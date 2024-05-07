#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int m = 2 * n;
        int a[m];
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            int j = 1;
            for (int k = i + 1; k < m; k++)
            {

                if (a[i] == a[k])
                {
                    j++;
                }
                if (j > 2)
                {
                    cout << "no" << endl;
                    break;
                }
            }
            if (j > 2)
            {
                break;
            }
            if (i == m - 1)
            {
                cout << "yes" << endl;
                break;
            }
        }
    }
}