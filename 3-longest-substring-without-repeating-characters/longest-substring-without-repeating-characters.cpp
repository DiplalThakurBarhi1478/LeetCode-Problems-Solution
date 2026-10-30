class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> chars;

        int left = 0;
        int longest = 0;

        for (int right = 0; right < s.length(); right++) {

            while (chars.count(s[right])) {
                chars.erase(s[left]);
                left++;
            }

            chars.insert(s[right]);

            longest = max(longest, right - left + 1);
        }

        return longest;
    }
};