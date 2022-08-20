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
    
//     void inorder(TreeNode* root, vector<int> &ans)
//     {
//          if(root==NULL)
//             return ;
//          inorder(root->left,ans);
//         ans.push_back(root->val);
//          inorder(root->right,ans);
        
//     }
vector<int> inorderTraversal(TreeNode* root) {
 stack<TreeNode*> st;
    vector<int> ans;
    
    TreeNode* cur=root;
    while(cur!=NULL or !st.empty())
    {
        while(cur!=NULL)
        {
            
            st.push(cur);
            cur=cur->left;
            
            
        }
        
        
        
        cur=st.top();
        st.pop();
        ans.push_back(cur->val);
        
        
        cur=cur->right;
       
    }
    
    return ans;
        // vector<int> ans;
        // inorder(root,ans);
        // return ans;
       
    }
};