class Solution {
public:
    int translateNum(int num) {
        string src = to_string(num);
        vector<int> dp(src.size());
        dp[0] = 1;
        for (int i = 1; i < dp.size(); i++) {
            if (i > 1) dp[i] += dp[i - 1] + (stoi(src.substr(i - 1, 2)) < 26 && src[i - 1] != '0' ? dp[i - 2] : 0);
            else dp[i] += dp[i - 1] + (stoi(src.substr(0, 2)) < 26 && src[i - 1] != '0' ? 1 : 0);
        }
        return dp.back();
    }
};