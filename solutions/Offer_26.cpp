/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if (!A || !B) return false;
        if (isSame(A, B)) return true;
        return isSubStructure(A->left, B) || isSubStructure(A->right, B);
    }
    bool isSame(TreeNode* A, TreeNode* B) {
        if (!B) return true;
        if (!A || A->val != B->val) return false;
        return isSame(A->left, B->left) && isSame(A->right, B->right);
    }
};