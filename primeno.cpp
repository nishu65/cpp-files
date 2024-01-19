#include <iostream>
using namespace std;
int check(int j){
    bool x=true;
    int i;
     for (i = 2; i <= j/2; i++)
        {

            if (j % i == 0)
            {
                //cout << " NOT PRIME NO : "<<a<<endl;
                x=false;
                break;
            }
        }
         return x;
}

int main()
{
    int a;
    int b;
    bool y;
    cout << "INPUT FIRST NO :";
    cin >> a;
    cout << "INPUT SECOND NO :";
    cin >> b;
    for (int j=a ; j <= b; j++)
    {
      y= check(j);
      if(y){
        cout<<"prime no : "<<j<<endl;
      }
    }
}