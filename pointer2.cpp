#include<iostream>
int * test(int *a){
    return a;
}
int main(){
    int a = 10;
    int *p = &a;
    std::cout << "Address of a: " << &a << std::endl;
    std::cout << "Value of p: " << p << std::endl;
    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Value of *p: " << *p << std::endl;
    std::cout<<"value return by  function: "<<test(&a)<<std::endl;
    return 0;
}