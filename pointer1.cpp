#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter  ";
    cin >>a;
    //cout<<&a; gives address of a;
    int *ptr =&a;
    cout << "value" << *ptr;

}