#include<iostream>
using namespace std;
void chart(int a){
    unsigned char b =a;
    cout<<"character at "<<a<<" is : ";
    cout<<b<<endl;

}
int main(){
    for(int i=0;i<=255;i++){
    chart(i);
    }

    return 0;
}
