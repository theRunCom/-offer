// 原题链接：https://leetcode.cn/problems/er-jin-zhi-zhong-1de-ge-shu-lcof/description/?favorite=xb9nqhhg
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        unsigned int un = n;
        while (un) res += un & 1, un >>= 1;
        return res;
    }
};
