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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
       vector<vector<int>> ans;
        map<int,vector<int>> m;
        queue<pair<int,TreeNode*>> q;
        q.push({0,root});
        while(!q.empty())
        {
            int n=q.size();
            multiset<pair<int,int>> tmp;
            for(int i=0; i<n; i++)
            {
                auto it=q.front();
                q.pop();
                tmp.insert({it.first,it.second->val});
                if(it.second->left)
                {
                    q.push({it.first-1,it.second->left});
                }
                if(it.second->right)
                {
                    q.push({it.first+1,it.second->right});
                }
                
            }
            for(auto t: tmp)
            {
                m[t.first].push_back(t.second);
                
                
            }
            
        }
        for(auto it: m)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};