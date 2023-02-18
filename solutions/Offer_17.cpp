class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> res;
        int last = 0;
        while (n--)
            last = last * 10 + 9;
        for (int i = 1; i <= last; i++)
            res.push_back(i);
        return res;
    }
};