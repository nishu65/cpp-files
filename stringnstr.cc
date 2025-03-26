#include <iostream>
class Solution {
    public:
        int strStr(std::string haystack, std::string needle) {
            int n = haystack.size(), m = needle.size();
            if (m == 0) return 0;  // Edge case: Empty needle
    
            int i = 0, j = 0, start = -1;
    
            while (i < n) {
                if (haystack[i] == needle[j]) {  
                    if (j == 0) start = i;       
                    j++;
                    if (j == m) return start;   
                } else {  
                    if (j > 0) {
                        i = start; 
                    }
                    j = 0;
                }
                i++; 
            }
    
            return -1; 
        }
    };
    

int main()
{
    std::string haystack = "dsddsdsadbutsad", needle = "sad";

    Solution s;
    std::cout << s.strStr(haystack, needle) << std::endl;
    return 0;
}