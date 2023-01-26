/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        int length = 0;
        for (auto p = head; p; p = p->next) length++;
        if (length < k) return nullptr;
        auto l = head;
        for (int i = 0; i < length - k; i++) l = l->next;
        return l;
    }
};