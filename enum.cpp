#include <iostream>

using namespace std;

int main(){
    enum meal{breakfast,lunch,dinner};
    meal m1=breakfast,m2=lunch;
    cout <<(m1==0)<<(m2==1)<<endl;
    return 0;
}