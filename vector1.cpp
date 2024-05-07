#include <iostream>
#include <vector>
using namespace std;
vector<string> test(vector<string> color)
{
    for (int i = 0; i < color.size(); i++)
    {
        color[i][0] = toupper(color[i][0]);

        for (int j = 1; j < color[i].size(); j++)
        {
            color[i][j] = tolower(color[i][j]);
        }
    }
    return color;
}
int main()
{
    vector<string> color = {"rEd", "blue", "bLack", "white"};
    for (string c : color)
    {
        cout << c << " ";
    }
    cout << endl;
    vector<string> result = test(color);
    for (string a : result)
    {
        cout << a << "  ";
    }
}