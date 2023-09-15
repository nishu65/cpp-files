#include<iostream>
using namespace std;
class add{
    public:
    int func(int &a,int &b){
        int*c;
        *c=a+b;
        display(&c);

    };
    void display (int &c){
        cout<<"SUM OF A + B = "<<*c;
    };
}; 
int main(){
    int *a,*b;
    cout<<"ENTER NUMBER A : ";
    cin>>*a;
    cout<<"ENTER NUMBER B : ";
    cin>>*b;
    add a1;
    a1.func(a,b);
    return 0;
    


};