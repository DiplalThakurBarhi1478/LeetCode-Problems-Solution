class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string ans = "";

        while(columnNumber > 0){
            // 1. Adjust columnNumber
            columnNumber--;

            // 2. Find remainder
            int remainder = columnNumber % 26;

            // 3. Convert remainder into character
            char ch = 'A' + remainder;
            // 4. Add character to ans
            ans += ch;

            // 5. Divide columnNumber by 26
            columnNumber /= 26;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};

//rough
// 56%26 4-> D,
// 2 -> DB

