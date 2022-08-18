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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //base case
//         if (root == NULL || root == p || root == q) {
//             return root;
//         }
//         TreeNode* left = lowestCommonAncestor(root->left, p, q);
//         TreeNode* right = lowestCommonAncestor(root->right, p, q);

//         //result
//         if(left == NULL) {
//             return right;
//         }
//         else if(right == NULL) {
//             return left;
//         }
//         else { //both left and right are not null, we found our result
//             return root;
//         }
       
        
        
        
        //Another approach too in striver video for BST
       if(!root)
           return NULL;
        TreeNode* cur=root;
        if(cur->val<p->val and cur->val<q->val)
        {
            return lowestCommonAncestor(root->right,p,q);
        }
          if(cur->val>p->val and cur->val>q->val)
        {
            return lowestCommonAncestor(root->left,p,q);
        }
        
        return root;//else case (point of spit=LCA)
        
    }
};