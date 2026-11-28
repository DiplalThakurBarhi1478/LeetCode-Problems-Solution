class Solution {
public:
    int strStr(string haystack, string needle) {
        //sliding window method
        int partSize = needle.length();

        for(int i = 0; i < haystack.length(); i++){
            string windString = haystack.substr(i, partSize);

            if(windString == needle){
                return i;
            }
            
        }

        return -1;
    }
};