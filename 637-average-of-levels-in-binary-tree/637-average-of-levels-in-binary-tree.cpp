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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
       
        queue<TreeNode*> q;
        if(!root)
            return {};
        q.push(root);
        
        
        while(!q.empty())
        {
             double sum=0;
            double n=q.size();
            for(int i=0; i<n; i++)
            {
                auto it=q.front();
                sum+=it->val;
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
             ans.push_back(sum/n);
        }
        return ans;
    }
};