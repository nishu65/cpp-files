//.................................TO PRINT 2D MATRIX OF SIZE a ALL ELEMENT ARE a ..............................................
#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> matrix(int a)
{
    vector<int> row(a, a);
    vector<vector<int>> arr(a, row);
    return arr;
}
int main()
{
    int a;
    cout<<"ENTER A NO : ";
    cin >> a;
    vector<vector<int>> arr = matrix(a);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}