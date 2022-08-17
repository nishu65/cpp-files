#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    int d,e,f;
    cout <<"enter no of days :";
    cin>>a;
    d= a/365;
    e=(a%365)/7;
    f=((a%365)%7);
    cout <<d<<" years ";
    cout <<e<<" weeks and ";
    cout <<f<<" days ";
    cout <<" in "<<a<<" days.";
    return 0;
}