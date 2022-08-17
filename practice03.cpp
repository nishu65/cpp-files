#include <iostream>
using namespace std;

float car(int price,int intrest =10){
    return price/intrest;
}
int main(){
    int budget;
    cout<<"enter budget";
    cin>>budget;
    cout<<"price on emi "<<budget+car(budget);
    return 0;
}