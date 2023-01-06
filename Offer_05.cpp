// 原题链接：https://leetcode.cn/problems/ti-huan-kong-ge-lcof/description/?favorite=xb9nqhhg
class Solution {
public:
    string replaceSpace(string s) {
        string res;
        for (auto x : s)
            if (x == ' ')
                res += "%20";
            else
                res += x;
        return res;
    }
};
