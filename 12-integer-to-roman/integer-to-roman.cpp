class Solution {
public:
    string intToRoman(int num) {
        const vector<pair<int, string>> romans = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"},  {90, "XC"},  {50, "L"},  {40, "XL"},
        {10, "X"},   {9, "IX"},   {5, "V"},   {4, "IV"},
        {1, "I"}
    };
    
    cout << "Number : ";

    string actualRoman = "";

    // 2. Greedy matching loop
    for (const auto& pair : romans) {
        while (num >= pair.first) {
            actualRoman += pair.second; // Append the Roman symbol
            num -= pair.first;          // Subtract its value
        }
    }

    // 3. Print the final result cleanly
    return actualRoman;


        
    }
};