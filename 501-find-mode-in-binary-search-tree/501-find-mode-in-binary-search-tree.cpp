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
     unordered_map<int,int> m;
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        inorder(root->left);
        m[root->val]++;
        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        vector<int> res;
       int maxi=INT_MIN;
        for(auto it: m)
        {
            maxi=max(maxi,it.second);
        }
        
        for(auto x: m)
        {
            if(maxi==x.second)
            {
                res.push_back(x.first);
            }
        }
        return res;
    }
};