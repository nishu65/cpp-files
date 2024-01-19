#include<iostream>
#include"power.h"
using namespace std;
int main(){
    int a,b,c;
    cout<<"ENTER A NO :";
    cin>>a;
    cout<<"power : ";
    cin>>b;
    c=pow(a,b);
    cout << a <<"^"<< b<<" : "<<c;

    return 0;
}