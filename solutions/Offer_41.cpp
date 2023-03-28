class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int>> min_heap;

    MedianFinder() {
        
    }
    
    void addNum(int num) {
        max_heap.push(num);
        while (min_heap.size() && min_heap.top() < max_heap.top()) {
            auto minv = min_heap.top(), maxv = max_heap.top();
            min_heap.pop(), max_heap.pop();
            max_heap.push(minv), min_heap.push(maxv);
        }
        if (max_heap.size() > min_heap.size() + 1) {
            min_heap.push(max_heap.top());
            max_heap.pop();
        }
    }
    
    double findMedian() {
        if (max_heap.size() + min_heap.size() & 1) return max_heap.top();
        return (max_heap.top() + min_heap.top()) / 2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */