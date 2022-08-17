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
    int sumNumbers(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        int sum=0;
        q.push({root,0});
        while(!q.empty())
        {
            auto [n,c]=q.front();
            q.pop();
            c=c*10+n->val;
            if(n->right)
            {
                q.push({n->right,c});
            }
            if(n->left)
            {
                q.push({n->left,c});
            }
            if(!n->left and !n->right)
            {
                sum+=c;
            }
            
        }
        return sum;
    }
};