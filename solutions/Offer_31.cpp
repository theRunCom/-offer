class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        if (pushed.size() != popped.size()) return false;
        stack<int> stk;
        int i = 0;
        for (auto x : pushed) {
            stk.push(x);
            while (stk.size() && stk.top() == popped[i]) {
                stk.pop();
                i++;
            }
        }
        return stk.empty();
    }
};