#include <iostream>
using namespace std;
class sizeo
{
public:
    int size()
    {
        cout << "size of int  in byte  :" << sizeof(int) << endl;
        cout << "size of float in byte :" << sizeof(float) << endl;
        cout << "size of bool in byte  :" << sizeof(bool) << endl;
        cout << "size of char: in byte :" << sizeof(char) << endl;
    }
};
int main()
{
    sizeo a;
    a.size();
}