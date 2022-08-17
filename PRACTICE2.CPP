#include <iostream>
using namespace std;

int pra(int a){
    if (a !=0){
        return a+ pra(a-1);
    }
    return 0;
}
int main(){ 
    int x;
    cout <<"enter a no :";
    cin >>x;
    cout <<pra(x);
    return 0;
}