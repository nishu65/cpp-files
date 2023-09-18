#include <iostream>
using namespace std;
class function
{
public:
    int func(int x)
    {
        
        for (int i = 10; i > 0; i--)
        {
            if()
        func(i);
            return (x * i);
        }
        
    }
    int func(int x, int y)
    {
        int c = x + y;
        return c;
    }
    //friend class dis;
    //friend void display(func&)
};
/*class dis
{
public:
void display (func&){
    cout << func(a);

}
};*/
int main()
{
    function a;
    a.func(5);
}
