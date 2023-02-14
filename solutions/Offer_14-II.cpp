class Solution {
public:
    const int MOD = 1e9 + 7;
    int cuttingRope(int n) {
        if(n <= 3)return 1 * (n - 1);
        long long p = 1 ;
        while(n >= 5) {
            n -= 3;
            p = (p * 3) % MOD;
        }    
        return (p * n) % MOD;
    }
};