#include <iostream>
using namespace std;
float moneyreceived(int currentmoney,float factor=1.04){
    return currentmoney* factor;
}
int main(){
    int money;
    cin>>money; 
    cout<<money <<"      "<<moneyreceived(money,1.1)<<endl;
    return 0;
}