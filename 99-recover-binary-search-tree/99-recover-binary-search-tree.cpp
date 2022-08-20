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
    vector<int> ans; //S(o(N))
  
    void inorder(TreeNode* root)//O(N)
    {
        if(!root)
            return;
        inorder(root->left);
        ans.push_back(root->val);                      //T(C)=O(2N) +log(N) 
        inorder(root->right);
        
    }
    void tree(TreeNode* root,int &ind)
    {
        if(!root)                        //O(N)
            return;
        tree(root->left,ind);
        root->val=ans[ind++];
        tree(root->right,ind);
    }
    void recoverTree(TreeNode* root) {
        if(!root)
        
            return;
       inorder(root);
        sort(ans.begin(), ans.end()); //O(NlogN)
        int ind=0;
        tree(root,ind);
        
        //optimization by stack
    }
};