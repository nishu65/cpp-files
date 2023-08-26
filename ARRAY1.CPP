#include<iostream>
using namespace std;
int main (){
    int a;
    cout<<"enter length of array : ";
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    for(int i=0;i<a;i++){
        cout<<"array :"<< b[i];
    }

}