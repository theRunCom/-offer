// 原题链接：https://leetcode.cn/problems/fei-bo-na-qi-shu-lie-lcof/description/?favorite=xb9nqhhg
class Solution {
public:
    int fib(int n) {
        int a = 1, b = 1, c = 1;
        if (n == 0) return 0;
        while (n > 2) {
            c = (a + b) % 1000000007;
            a = b;
            b = c;
            n--;
        }
        return c;
    }
};
