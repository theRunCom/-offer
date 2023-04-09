class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = -1;
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (mid == nums[mid]) left = mid + 1;
            else {
                res = mid;
                right = mid - 1;
            }
        }
        return res == -1 ? nums.size() : res;
    }
};

