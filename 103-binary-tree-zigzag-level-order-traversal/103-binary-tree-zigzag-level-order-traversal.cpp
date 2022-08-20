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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root)
            return res;
        queue<TreeNode*> q;
    int flag=1;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int> ans;
            for(int i=0; i<n; i++)
            {
                auto it=q.front();
                ans.push_back(it->val);
                q.pop();
                if(it->left)
                {
                    q.push(it->left);
                }
                if(it->right)
                {
                    q.push(it->right);
                }
                
                
            }
            if(flag%2==0)
            {
                reverse(ans.begin(),ans.end());
                
            }
            flag++;
            res.push_back(ans);
        }
        return res;
    }
};