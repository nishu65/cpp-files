#include<iostream>
#include<fstream>
using namespace std;
int main(){
 // /.......................  using class and function.............
//fstream a;
//a.open("file12.txt");
//a<<"hello world ......";
//a.close();
//return 0;
// using constructor ..................................................
ofstream a("file12.txt");
a<<"new program .";
}