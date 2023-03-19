class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0, val;
        for (auto x : nums) {
            if (cnt == 0) {
                val = x, cnt ++;
            }
            else if (x == val) cnt ++;
            else cnt --;
        }
        return val;
    }
};
