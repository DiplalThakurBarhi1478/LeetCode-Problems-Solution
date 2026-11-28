class Solution {
public:
    string trim(string& s){

        auto is_space = [](unsigned char ch){return isspace(ch);};

        s.erase(find_if_not(s.rbegin(), s.rend(), is_space).base(), s.end());

        s.erase(s.begin(), find_if_not(s.begin(), s.end(), is_space));

        return s;
    }

    string reverseWords(string s) {
        
        trim(s);
        string result = "";
        stringstream ss(s);
        string chunk;

        while(ss >> chunk){
            result = chunk + " " + result;
        }

        if(!result.empty()){
            result.pop_back();
        }

    return result;
    }
};