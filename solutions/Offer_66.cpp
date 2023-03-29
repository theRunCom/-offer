class Solution {
public:
    vector<int> constructArr(vector<int>& a) {
        if (a.empty()) return vector<int>();
        int n = a.size();
        vector<int> res(n);
        res[0] = 1;
        for (int i = 1, p = a[0]; i < n; i ++ ) {
            res[i] = p;
            p *= a[i];
        }
        for (int i = n - 2, p = a[n - 1]; i >= 0; i -- ) {
            res[i] *= p;
            p *= a[i];
        }
        return res;
    }
};