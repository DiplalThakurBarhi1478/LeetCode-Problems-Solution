class Solution {
public:
    int strStr(string haystack, string needle) {
        //sliding window method
        int partSize = needle.length();

        for(int i = 0; i < haystack.length(); i++){
            int windSize = partSize;
            int idx = i;

            string windString = haystack.substr(idx, windSize);

            if(windString == needle){
                return idx;
            }
            
        }

        return -1;
    }
};