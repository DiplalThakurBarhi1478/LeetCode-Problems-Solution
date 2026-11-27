class Solution {
public:
    string removeOccurrences(string s, string part) {
        int partSize = part.length();
        int i = 0;

        while(i <= ((int)s.length() - partSize)){
            string temp = s.substr(i, partSize);

            if(temp == part){
                s.erase(i, partSize);
                i = 0;
            }else{
                i++;
            }
        }

        return s;
    }
};