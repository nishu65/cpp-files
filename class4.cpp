#include<iostream>
using namespace std;
class Solution{
    public:
    int getSum(int a[], int n) {
        // Your code goes here
     int c=0;
     for (int i=0;i<n;i++){
        c=a[i]+c;
     }
     return c;
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cout <<"t: "<<t<<endl;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.getSum(a, n) << endl;
    }

    return 0;
};