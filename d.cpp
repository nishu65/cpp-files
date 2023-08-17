#include <iostream>
using namespace std;
int main(){
    int a,first ,second,third,fourth,fifth;
    cout <<"ENTER A FIVE DIGIT NO. : ";
    cin>>a;
    
    first =a/10000;
    a=a%10000;

    second = a/1000;
    a=a%1000;

    third=a/100;
    a=a%100;

    fourth=a/10;
    fifth=a%10;


    cout<<"SUM OF FIRST DIGIT AND LAST DIGIT IS : " <<first +fifth<<endl;
    return 0;


}