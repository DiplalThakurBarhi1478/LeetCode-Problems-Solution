class Solution {
public:
    string removeOccurrences(string str, string part) {
        string result = "";
        int partSize = part.length();

        for(char c : str){
            result.push_back(c);

            if(result.length() >= partSize && result.substr(result.length() - partSize) == part){
                result.erase(result.length() - partSize);
            }
        }

        return result;
        }
};