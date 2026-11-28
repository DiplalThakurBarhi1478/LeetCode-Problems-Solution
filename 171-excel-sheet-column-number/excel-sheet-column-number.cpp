class Solution {
public:
    int titleToNumber(string columnTitle) {

        int columnNumber = 0;

        reverse(columnTitle.begin(), columnTitle.end());

        for(int i = 0; i < columnTitle.length(); i++){

            int value = columnTitle[i] - 'A' + 1;

            columnNumber += value * pow(26, i);
        }

        return columnNumber;
    }
};