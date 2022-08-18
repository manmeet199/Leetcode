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
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        return result(preorder,0,preorder.size()-1,postorder,0,postorder.size()-1);
        
        
    }
    TreeNode* result(vector<int>&preorder, int pres, int prend, vector<int>&postorder, int pos, int pose)
    {
        if(pres>prend|| pos>pose)
        {
            return NULL;
            
        }

        TreeNode* root=new TreeNode(preorder[pres]);
                if(pres==prend)
            return root;
            
        int postind=pos;
        while(postorder[postind]!=preorder[pres+1])//pres+1 next to root
        {
            postind++;
        }
        int len=postind-pos+1;
        root->left=result(preorder,pres+1,pres+len,postorder,pos,postind);
        root->right=result(preorder,pres+len+1,prend,postorder,postind+1,pose-1);
        return root;
        
    }
};