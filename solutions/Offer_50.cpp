class Solution {
public:
    char firstUniqChar(string s) {
        unordered_map<char, int> hash;
        for (auto c : s) hash[c] ++;
        char res = ' ';
        for (auto c : s) 
            if (hash[c] == 1) {
                res = c;
                break;
            }
        return res;
    }
};