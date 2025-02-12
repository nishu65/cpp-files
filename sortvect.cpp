#include <iostream>
#include <vector>
using namespace std;
vector<int> sort(vector<int>arr){
    int i=0;
    for (i; i < arr.size(); i++)
    {
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            i=0;
        }
        
    }
   return arr;

}
int main()
{
    vector<int> arr;
    arr = {40, 30, 37, 45, 70, 56};
   arr=sort(arr);
    for(int j=0;j<arr.size();j++){
        cout << arr[j] << endl;
    }
    

}