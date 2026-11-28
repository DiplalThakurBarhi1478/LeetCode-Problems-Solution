class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        string ans = "";
        
        for(int i = 0; i < s.length(); i++){
            string word = "";

            while(s[i] != ' ' && i < s.length()){
                word += s[i];
                i++;
            }

            reverse(word.begin(), word.end());
            
            if(word.length() > 0){
                ans = ans + " " + word;
            }
        }

        ans.erase(0, 1);

        return ans; 
    }
};