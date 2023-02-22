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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        queue<TreeNode*> q;
        q.push(root); 
        int num = 1;
        while(q.size()) {
            int len = q.size();
            vector<int> cur;
            for(int i = 0; i < len; i++) {
                auto t = q.front();
                q.pop();
                cur.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);                      
            }
            if(num % 2 == 0) reverse(cur.begin(),cur.end());
            res.push_back(cur);  
            num++;
        }
        return res;
    }
};