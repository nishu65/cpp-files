#include<iostream>
using namespace std;
class add{
    protected:
     int a,b;
    public:
        add(){
            cout<<"ENTER 1ST NUMBER : ";
            cin>>a;
            cout<<"ENTER 2ND NUMBER : ";
            cin>>b;
        }
        void display(){
            cout<<"SUM : "<<a+b;
        }
};
int main (){
    add a;
    a.display();
    
}