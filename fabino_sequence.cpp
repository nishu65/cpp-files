#include <iostream>
using namespace std;

int fab(int a){
    if ((a==0)||(a==1)) {
        return a;
    }
    cout<< fab(a-1)+fab(a-2);
   // return fab(a-1)+fab(a-2);
    return  0;
} 

int main(){
    int x,i;
    cout<<"enter a no. :";
    cin>>x;
    for ( i=0;i<=x;i++){
        cout<<fab(i) << ",";
    }
    return 0;
}