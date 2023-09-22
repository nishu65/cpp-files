#include<iostream>
#include<fstream>
//#include<string>
using namespace std;
int main (){
    string password="password123@jj";
    ofstream a("file12.txt");
    a<<"password :"<<password;
}