/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
     queue<pair<TreeNode*, TreeNode*>> q; // [node, parent]
        if(root) q.push({root, NULL});
        while(q.size())
        {
            TreeNode *x_parent = NULL, *y_parent = NULL;
            int sz = q.size();
            for(int i = 0; i < sz; ++i)
            {
                auto [node, parent] = q.front(); q.pop();
                if(node->val == x) x_parent = parent;
                else if(node->val == y) y_parent = parent;
                if(node->left) q.push({node->left, node});
                if(node->right) q.push({node->right, node});
            }
            if(x_parent || y_parent) return x_parent && y_parent && x_parent != y_parent ;
        }
        return false;
    }
};