#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class segment
{
    int n;
    vector<int> seg;

    void build(const vector<int> &a, int idx, int low, int high)
    {
        if (low == high)
        {
            seg[idx] = a[low];
            return;
        }

        int mid = low + (high - low) / 2;

        build(a, 2 * idx + 1, low, mid);
        build(a, 2 * idx + 2, mid + 1, high);

        seg[idx] = max(seg[2 * idx + 1], seg[2 * idx + 2]);
    }

    int query(int idx, int low, int high, int l, int r)
    {
        // No overlap
        if (r < low || l > high)
            return INT_MIN;

        // Complete overlap
        if (l <= low && high <= r)
            return seg[idx];

        // Partial overlap
        int mid = low + (high - low) / 2;

        int left = query(2 * idx + 1, low, mid, l, r);
        int right = query(2 * idx + 2, mid + 1, high, l, r);

        return max(left, right);
    }

public:
    void segment_tree(const vector<int> &a)
    {
        n = a.size();
        seg.resize(4 * n);
        build(a, 0, 0, n - 1);
    }

    int range_max(int l, int r)
    {
        return query(0, 0, n - 1, l, r);
    }

    void print()
    {
        cout << "\nSegment Tree Array:\n";
        for (int i = 0; i < 2 * n; i++)
        {
            cout << seg[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int n;
    cout << "Size of vector: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter elements:\n";
    for (auto &x : a)
    {
        cin >> x;
    }

    segment obj;
    obj.segment_tree(a);

    obj.print();

    int l, r;
    cout << "\nEnter query range (l r): ";
    cin >> l >> r;

    cout << "Maximum in range = " << obj.range_max(l, r) << endl;

    return 0;
}
