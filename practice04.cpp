#include<iostream>
using namespace std;

int series (int a ){
    if(a<=1)
    {
        return 1;
    }
    return (a*a)+series(a-1);
}
int main(){
    int b;
    cout <<"enter value : ";
    cin>>b;
    cout <<" square series of " <<b<< " is " <<series(b);
    return 0;
}