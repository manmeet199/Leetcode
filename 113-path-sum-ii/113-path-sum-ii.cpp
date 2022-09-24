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
    void helper(TreeNode* root, vector<vector<int>> &ans, vector<int> &path, int targetSum, int curSum)
    {
        if(!root)
            return;
        curSum+=root->val;
        path.push_back(root->val);
        if(!root->left and !root->right and curSum==targetSum)
        {
            ans.push_back(path);
        }
        helper(root->left,ans,path,targetSum,curSum);
        helper(root->right,ans,path,targetSum,curSum);
        
        
        path.pop_back();
        
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;
        helper(root,ans,path,targetSum,0);
        return ans;
        
    }
};