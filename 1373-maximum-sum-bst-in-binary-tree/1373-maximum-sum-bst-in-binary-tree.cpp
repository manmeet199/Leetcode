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
class sumBST
{
public:
    int maxi;
    int mini;
    bool isBST;
    int sum;
};

sumBST solve(TreeNode* root ,int &ans)
{
    if(root == NULL)
        return {INT_MIN ,INT_MAX ,true ,0};
    
    sumBST left = solve(root->left ,ans);
    sumBST right = solve(root->right ,ans);
    
    sumBST currNode;
    
    currNode.sum = left.sum + right.sum + root->val;
    currNode.maxi = max(root->val ,right.maxi);
    currNode.mini = min(root->val ,left.mini);
    
    if(left.isBST && right.isBST && (root->val > left.maxi && root->val < right.mini))
    {
        currNode.isBST = true;
        currNode.sum = left.sum + right.sum + root->val;
    }
    else
    {
        currNode.isBST = false;
    }
    
    if(currNode.isBST)
    {
        ans = max(ans ,currNode.sum);
    }
    return currNode;
}


int maxSumBST(TreeNode* root) {
    int Sum =0;
    sumBST temp = solve(root ,Sum);
    return Sum;

    }
};