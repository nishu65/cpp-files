#include<iostream>

class cc {
    private :
    int a=60;
    int b=5;
    int x;
public :
    void print() {
        std::cout << "Hello, World!" << std::endl;
        [this]() {x= a+b;

        }();
        std::cout<<x<<std::endl;
}

    };
    

int main(){
    cc c;
    c.print();
    return 0;
}