class Solution {
public:

    bool isSame(int freq[], int windFreq[]){
        for(int i = 0; i < 26; i++){
            if(freq[i] != windFreq[i]){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        //step 1: store frequency of s1
        int freq[26] = {0};

        for(int i = 0; i < s1.length(); i++){
            freq[s1[i] - 'a']++;
        }

        //step 2: find that s1 in s2 using window size method

        int windowSize = s1.length();

        for(int i = 0; i < s2.length(); i++){
            int windIdx = 0, idx = i;

            int windFreq[26] = {0};

            // counting freq of the window element 
            while(windIdx < windowSize && idx < s2.length()){
                windFreq[s2[idx] - 'a']++;
                windIdx++;
                idx++;
            }
            
            // checking freq or windFreq
            if(isSame(freq, windFreq)){
                return true;
            }
        }
        return false;
    }
};