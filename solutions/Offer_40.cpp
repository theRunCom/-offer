class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        priority_queue<int> pq;
        for (auto x : arr) {
            pq.push(x);
            if (pq.size() > k) pq.pop();
        }
        vector<int> ans;
        while (pq.size()) ans.push_back(pq.top()), pq.pop();
        return ans;
    }
};
