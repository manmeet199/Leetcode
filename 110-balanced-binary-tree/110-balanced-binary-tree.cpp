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
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return 1+max(height(root->left),height(root->right));
    }
    bool isBalanced(TreeNode* root) {
      if(!root)
          return true;
       int x=height(root->left);
        int y=height(root->right);
        if(!isBalanced(root->left))
            return false;
        if(!isBalanced(root->right))
        {
            return false;
        }
        if(abs(x-y)<=1)
        {
            return true;
        }
        return false;
    }
};