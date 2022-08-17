#include <iostream>
#include <string>
using namespace std;

class student{
    public:
       int roll,phone;
       string a;
   // private:
   //   int id(void) ; int rank(void);
}; 
//void:: student setdata ( roll (int a ), phone(int b) ,name(stringc) ){

int main ()
{
    student nishu;
    nishu.roll = 5;
   // nishu.a =n;
    nishu.phone = 8582582;
    //nishu.rank(09);
 cout<<"roll no. of nishu = "<<nishu.roll<<endl;
 cout<<"phone no. of nishu = "<<nishu.phone<<endl;
}