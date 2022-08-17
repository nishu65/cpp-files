#include<iostream>

using namespace std;
 //---------------------------------------default argument function------------------------------------
int sum(int a=0,int b=9,int c=4,int d=6){
    return (a+b+c+d);
}

int main(){
    int w,x,y,z;
    cout<<"enter 1st no. :";
    cin>>w;
    cout<<"sum of one numbers : "<<sum(w)<<endl;
    cout<<"enter 2nd no. :";
    cin>>x;
    cout<<"sum of two numbers : "<<sum(w,x)<<endl;
    cout<<"enter 3rd no. :";
    cin>>y;
    cout<<"sum of three numbers : "<<sum(w,x,y)<<endl;
    cout<<"enter 4th no. :";
    cin>>z;
    cout<<"sum of four numbers : "<<sum(w,x,y,z)<<endl;
    return 0;
    }