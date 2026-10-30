class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Edge case: if the input vector is empty, return an empty string
        if (strs.empty()) return "";

        // 1. Start by assuming the first word is the common prefix
        string prefix = strs[0];

        // 2. Compare this prefix with all other words in the vector
        for (size_t i = 1; i < strs.size(); ++i) {
            
            // Compare characters between 'prefix' and 'strs[i]'
            size_t min_length = min(prefix.length(), strs[i].length());
            size_t j = 0;
            
            // Loop until characters mismatch
            while (j < min_length && prefix[j] == strs[i][j]) {
                j++;
            }
            
            // 3. Shorten the prefix to the matched length
            prefix = prefix.substr(0, j);
            
            // Optimization: If prefix becomes empty, no need to check other words
            if (prefix.empty()) return "";
        }
        
        // 4. Return the final remaining prefix
        return prefix;
    }
};