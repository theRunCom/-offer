class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty())
            return 0;
        int minv = prices[0], res = 0;
        for (auto x: prices)
            res = max(res, x - minv), minv = min(minv, x);
        return res;
    }
};