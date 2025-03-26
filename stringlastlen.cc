#include <iostream>

int main()
{
    std::string s = "hello world  ";
    int m = s.size();
    int i = m - 1;
    if (s[i] == ' ')
    {
        i--;
        std::cout <<"t"<< s[i];
    }else{
        std::cout << "f";
    }
}