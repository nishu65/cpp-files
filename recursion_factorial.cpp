#include <iostream>
using namespace std;

int factorial(int a){
    if (a<=1){
        return 1;
    }
    return a*factorial(a-1);
}
int main(){
    int x;
    cout<<"enter a no. for its factorial :";
    cin>>x;
    cout <<"the factorial of "<<x<<" is " <<factorial(x);
    return 0;

}