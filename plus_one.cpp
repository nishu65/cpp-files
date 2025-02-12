#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int j, k = digits.size();
        for (j = k-1; j >= 0; j--) {
            if (digits[j] == 9) {
                if (j == 0) {
                    digits[j] = 1;
                    digits.push_back(0);
                } else {
                    digits[j] = 0;
                }
            } else {
                digits[j] = digits[j] + 1;
            }
        }
        return digits;
    }
};

int main() {
    Solution s;
    vector<int> digits = {9, 9, 9};   
    vector<int> result = s.plusOne(digits);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}