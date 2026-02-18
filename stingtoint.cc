#include<iostream>

class Solution {
    public:
        int myAtoi(std::string s) {
            if(s.empty()) return 0;
            int i = 0, sign = 1, result = 0;
            // Skip leading whitespace
            while(i < s.size() && s[i] == ' ') {
                i++;
            }
            // Check for sign
            if(i < s.size() && (s[i] == '-' || s[i] == '+')) {
                sign = (s[i] == '-') ? -1 : 1;
                i++;
            }
            // Convert string to integer
            while(i < s.size() && std::isdigit(s[i])) {
                int digit = s[i] - '0';
                // Check for overflow/underflow
                if(result > (INT_MAX - digit) / 10) {
                    return (sign == 1) ? INT_MAX : INT_MIN;
                }
                result = result * 10 + digit;
                i++;
            }
            return result * sign;          
        }
    };

int main(){
std::string s="   -42";
Solution sol;
int result = sol.myAtoi(s);
std::cout << result << std::endl; // Output: -42

s="4193 with words";
result = sol.myAtoi(s);
std::cout << result << std::endl; // Output: 4193

char ch='5';
int i=ch-'0'; // Convert char to int
std::cout << i << std::endl; // Output: 5

}