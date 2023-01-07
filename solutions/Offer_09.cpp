// 原题链接：https://leetcode.cn/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof/description/?favorite=xb9nqhhg
class CQueue {
public:
    stack<int> stk, cache;
    CQueue() {

    }
    
    void appendTail(int value) {
        stk.push(value);
    }
    
    void copy(stack<int> &a, stack<int> &b) {
        while (a.size()) {
            b.push(a.top());
            a.pop();
        }
    }

    int deleteHead() {
        if (cache.empty()) {
            if (stk.empty()) {
                return -1;
            }
            copy(stk, cache);
        }
        int res = cache.top();
        cache.pop();
        copy(cache, stk);
        return res;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
