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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        if(root==NULL)
            return postorder;
        stack<TreeNode*> s1,s2;
        s1.push(root);
        while(!s1.empty())
        {
            auto it=s1.top();
            s1.pop();
            s2.push(it);
            
            if(it->left)
            {
                s1.push(it->left);
            }
            if(it->right)
            {
                s1.push(it->right);
            }
           
        }
         while(!s2.empty())
            {
                postorder.push_back(s2.top()->val);
                s2.pop();
            }
            
        return postorder;
    }
};