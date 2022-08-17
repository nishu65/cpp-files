
#include <iostream>
using namespace std;

struct employee{
    int eid;
    char bbb;
    float salary;
};
int main(){ 
    struct employee nishu;
    nishu.eid=555;
    nishu.bbb= 'a' ;
     nishu.salary=2000000000;
    cout<<nishu.eid<<endl;
    cout<<nishu.bbb<<endl;
     cout<<nishu.salary<<endl;
     return 0; 
} 