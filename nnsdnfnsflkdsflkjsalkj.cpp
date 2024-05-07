#include<iostream>
using namespace std;
int main(){
    int a[5],x,i;
    x=0;
    for (i=0;i<5;i++){
            if(i==0){
            cout<<"enter maths:";
            }
            else if(i==1){
            cout<<"enter english:";
            }
            else if(i==2){
            cout<<"enter sc:";
            }
            else if(i==3){
            cout<<"enter ssc:";
            }
            else{
            cout<<"enter comp:";
            }
        
        cin>>a[i];
    }
    for(int j=0;j<5;j++){
        x=x+a[j];
    }
    cout<<"percentage :"<<x/5;
    return 0;
}