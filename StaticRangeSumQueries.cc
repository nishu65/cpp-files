#include <bits/stdc++.h>
using namespace std;

class segment {
    vector<long long> seg;
    int n;

public:

    void segment_init(const vector<int> &a){
        n = a.size();
        seg.resize(4*n);
        build(a,0,0,n-1);
    }

    void build(const vector<int> &a,int idx,int low,int high){
        if(low == high){
            seg[idx] = a[low];
            return;
        }

        int mid = low + (high-low)/2;

        build(a,2*idx+1,low,mid);
        build(a,2*idx+2,mid+1,high);

        seg[idx] = seg[2*idx+1] + seg[2*idx+2];
    }

    long long find(int l,int r){
        return query(0,0,n-1,l,r);
    }

    long long query(int idx,int low,int high,int l,int r){
        // No overlap
        if(r < low || l > high){
            return 0;
        }

        // Complete overlap
        if(l <= low && high <= r){
            return seg[idx];
        }

        int mid = low + (high-low)/2;

        long long left = query(2*idx+1,low,mid,l,r);
        long long right = query(2*idx+2,mid+1,high,l,r);

        return left + right;
    }
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n,q;
    cin >> n >> q;

    vector<int> a(n);
    for(auto &x : a){
        cin >> x;
    }

    segment f;
    f.segment_init(a);

    while(q--){
        int l,r;
        cin >> l >> r;
        l--;
        r--;
        cout << f.find(l,r) << "\n";
    }

    return 0;
}
