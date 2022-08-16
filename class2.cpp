#include <iostream>
#include <string>

using namespace std;

class student
{
  int stu_id, adm_no;

public:
  int standard;
  int roll;
  long long phone;
  void setdata(int a, int b);
  void getdata()
  {
    cout << "student id = " << stu_id << endl;
    cout << "admission no. = " << adm_no << endl;
    cout << "standard of student = " << standard << endl;
    cout << "roll no = " << roll << endl;
    cout << "phone = " << phone << endl;
    cout << "           " << endl;
  }
};

void student ::setdata(int a, int b)
{
  stu_id = a;
  adm_no = b;
}
int main()
{
  student nishu;
  nishu.standard = 10;
  nishu.roll = 8;
  nishu.phone = 85834483574;
  nishu.setdata(1243, 89736);
  nishu.getdata();
  student nk;
  nk.standard = 1;
  nishu.roll = 9;
  nishu.phone = 4566483574;
  nishu.setdata(1657, 89547);
  nishu.getdata();
  return 0;
}