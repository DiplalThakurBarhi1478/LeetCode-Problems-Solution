class Solution {
public:
    string removeOccurrences(string str, string part){
    int partSize = part.length();

    while(str.length() > str.find(part)){
        if(str.substr(str.find(part), partSize) == part){
            str.erase(str.find(part), partSize);
        }
    }

    return str;
}
};