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
    
    
    
    TreeNode* helper(vector<int>& preorder, int preS, int preE, vector<int>& inorder, int inS, int inE, map<int,int> &m)
        
    {
        if(preS>preE|| inS>inE)
            return NULL;
        TreeNode* root= new TreeNode(preorder[preS]);
        int inRoot=m[root->val];
        int numsLeft=inRoot-inS;
        root->left=helper(preorder,preS+1,preS+numsLeft,inorder,inS,inRoot-1,m);
        root->right=helper(preorder,preS+numsLeft+1,preE,inorder,inRoot+1,inE,m);
            return root;
        
        
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> m;
        for(int i=0; i<inorder.size(); i++)
        {
            m[inorder[i]]=i;
        }
        return helper(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,m);
            
    }
};