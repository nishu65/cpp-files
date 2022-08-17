#include <iostream>

using namespace std;

int main(){
    enum meal{breakfast,lunch,dinner};
    meal m1=breakfast;
    cout <<(m1==0)<<endl;
    return 0;
}