class Solution {
public:
    string reverseWords(string s) {
       string res = "",temp;
        stringstream ss(s);
        while(ss >> temp){
            res = temp + " " + res;
        }
        res.pop_back();
        return res;
    }
};