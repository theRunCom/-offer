class Solution {
public:
    const int MOD = 1000000007;
    int fib(int n) {
        int a = 1, b = 1, c = 1;
        if (n == 0) return 0;
        while (n > 2) {
            c = (a + b) % MOD;
            a = b;
            b = c;
            n--;
        }
        return c;
    }
};
