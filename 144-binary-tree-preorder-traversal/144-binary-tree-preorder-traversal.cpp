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
    vector<int> preorderTraversal(TreeNode* root) {
       
        stack<TreeNode*> s;
        vector<int> preorder;
         if(root==NULL)
            return preorder;
        s.push(root);
        while(!s.empty())
        {
            auto it=s.top();
            s.pop();
            
            preorder.push_back(it->val);
            if(it->right)
            {
                s.push(it->right);
            }
            if(it->left)
            {
                s.push(it->left);
            }
            
         }
        return preorder;
    }
};