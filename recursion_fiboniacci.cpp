#include <iostream>
using namespace std;

int fib(int n){
    if((n==0)||(n==1)){
        return n;
   }
    return fib(n-1)+fib(n-2);
}
int main(){
    int x;
    cout <<"enter a no. :";
    cin>>x;
    cout<<"fibonacci sequence is " << fib(x);
    return 0;
}