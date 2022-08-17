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
    int helper(TreeNode* root, map<int,int> &m)
    {
        if(!root)
            return 0;
        int sum=root->val;
        int left=helper(root->left,m);
        int right=helper(root->right,m);
        sum+=left+right;
        m[sum]++;
        return sum;
        
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
       
        map<int,int> m;
        vector<int> ans;
        helper(root,m);
        int mx=-1;
        for(auto it: m)
        {
          if(it.second>mx)
          {
              ans.clear();
              mx=it.second;
              ans.push_back(it.first); //return most frequent sum
          }
            
            
            
            else if(mx==it.second)
            {
                ans.push_back(it.first);
                
            }
        }
        return ans;
        
    }
};