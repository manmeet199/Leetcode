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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(!root) return root;
        if(depth == 1) {
            TreeNode* newNode = new TreeNode(val);
            newNode->left = root;
            return newNode;
        }
        fun(root, 1, val, depth);
        return root;
    }
    
    void fun(TreeNode* root, int d, int val, int depth) {
        if(!root) return;
        
        if(d == depth-1) {
            TreeNode* n1 = new TreeNode(val), *n2 = new TreeNode(val);
            n1->left = root->left;
            n2->right = root->right;
            root->left = n1;
            root->right = n2;
            return;
        }
        fun(root->left, d+1, val, depth);
        fun(root->right, d+1, val, depth);
    }
};