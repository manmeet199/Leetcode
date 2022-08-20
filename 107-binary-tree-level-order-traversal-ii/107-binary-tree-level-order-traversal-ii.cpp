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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL)
            return res;
        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty())
        {
            int l=q.size();
            vector<int> ans;
            for(int i=0; i<l; i++)
            {
            auto t=q.front();
            ans.push_back(t->val);
            q.pop();
            if(t->left!=NULL)
            {
                q.push(t->left);
            }
            if(t->right!=NULL)
            {
                q.push(t->right);
            }
            }
            res.push_back(ans);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};