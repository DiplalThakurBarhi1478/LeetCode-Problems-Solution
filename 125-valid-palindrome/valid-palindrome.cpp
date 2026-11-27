class Solution {
public:
    bool isPalindrome(string str) {
       int st = 0;
       int end = str.length() - 1;

        while(st <= end){
            if(!isalnum(static_cast<unsigned char>(str[st]))){ // checking if the character is alphanumeric
                st++;
                continue;
            }

            if(!isalnum(static_cast<unsigned char> (str[end]))){ // checking if the character is alphanumeric
                end--;
                continue;
            }

            if(tolower(static_cast<unsigned char> (str[st])) != tolower(static_cast<unsigned char> (str[end]))){ // checking if both of them are equal.
                return false;
            }

            st++;
            end--;
        }

        return true;
    }
};