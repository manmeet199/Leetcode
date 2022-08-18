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
    
    
   bool helper(TreeNode* t1, TreeNode* t2)
   {
       if(!t1 or !t2)
       return t1==t2;
       return (helper(t1->left,t2->right) and  t1->val==t2->val and helper(t1->right,t2->left));
       
       
   }
    bool isSymmetric(TreeNode* root) {
       return helper(root->left,root->right);
       
        
    }
};