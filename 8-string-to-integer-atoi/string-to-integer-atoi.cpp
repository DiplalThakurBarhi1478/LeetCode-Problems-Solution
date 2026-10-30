#include <string>
#include <cctype>
#include <climits>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        long long num = 0;
        int sign = 1;
        int i = 0;

        // 1. Skip whitespaces
        while (i < s.size() && isspace(s[i])) {
            i++;
        }

        // 2. Check sign
        if (i < s.size() && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (i < s.size() && s[i] == '+') {
            i++;
        }

        // 3. Convert digits and check overflow
        while (i < s.size() && isdigit(s[i])) {
            int digit = s[i] - '0';

            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > (sign == 1 ? 7 : 8))) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            num = num * 10 + digit;
            i++;
        }

        // 4. Apply sign
        return num * sign;
    }
};