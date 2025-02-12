#include<boost/array.hpp>
#include<iostream>
using namespace std;
int main(){
    boost::array<int, 5> arr = {1, 2, 3, 4, 5};
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}