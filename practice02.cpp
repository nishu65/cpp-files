#include <iostream>
using namespace std;
 
int recursion (int a){
    if (a>=50){
        return 0;
    }
    return a + recursion(a*2);
} 
int main(){
    int b;
    cout <<"enter a value ";
    cin>>b;
    cout <<"g.p. of "<<b<<" is  : "<< recursion(b); 
    return 0;
}