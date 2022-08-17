#include <iostream>
using namespace std;

int sum(int a,int b);
int main()
{
    int num1,num2;
    cout<<"hello world"<<endl;
    cout<<"enter 1st number"<<endl;
    cin>>num1; 
    cout<<"enter 2nd number"<<endl;
    cin>>num2;
    cout<<"sum of num 1 and num 2 is ="<<sum(num1,num2); 
    return 0;
}
int sum(int a,int b){
    int c=a+b;
    return c;
}