// 原题链接：https://leetcode.cn/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof/description/?favorite=xb9nqhhg
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        int i = 0, j = matrix[0].size() - 1;
        while (i < matrix.size() && j >= 0) {
            int x = matrix[i][j];
            if (x == target) return true;
            if (x > target) j--;
            else i++;
        }
        return false;
    }
};asd
