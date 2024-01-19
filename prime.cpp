#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout <<"ENTER A NO";
    cin>>a;
c=a;
    int i;
    for (i=2;i<=a/2;i++){
        if(a/i==0){

            break;
        }
        else{
            b=a;
        }
    }
    if(c==b){
    cout<<"prime :"<<b;
    }
}