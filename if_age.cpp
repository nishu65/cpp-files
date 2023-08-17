#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout <<"enter 1st age : ";
    cin >>a;
    cout <<endl;
    cout <<"enter 2nd age : ";
    cin>>b;
    cout <<endl;
    cout <<"enter 3rd age : " ;
    cin >>c;
    cout <<endl;

    if ((a>b) &&(a>c)){
        cout<<"older age = "<<a<<endl; 
    }
     else if((a>b)&&(a<c)){
        cout<<"middle age = "<<a<<endl;
    }
    else if((a<b)&&(a>c)){
        cout<<"middle age = "<<a<<endl;
    }
    else {
        cout<<"younger age = "<<a<<endl;
    }
   
    if ((b>c)&&(b>a)){
        cout <<"older age = "<<b<<endl;

    }
    else{
        cout<<"younger age = "<<b<<endl;
    }
    if ((c>a)&&(c>b)){
        cout <<"older age = "<<c<<endl;
    }
    else{
        cout<<"younger age = "<<c<<endl;
    }
    return 0;
}