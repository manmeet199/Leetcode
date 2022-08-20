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
    // void getPaths(TreeNode* root, int sum, vector<int> &path , vector<vector<int>> &paths)
    // {
    // //     if(!root)
    // //         return;
    // //     //else
    // //     path.push_back(root->val);
    //     if(!root->left and !root->right and root->val==sum)// for leaf node
    //     {
    //         paths.push_back(path);
    //         getPaths(root->left,sum-root->val,path,paths);
    //         getPaths(root->right,sum-root->val,path,paths);
    //         paths.pop_back();
    //     }
    // }
    // vector<vector<int>> pathSum(TreeNode* root, int sum) {
    //     vector<vector<int>> paths;
    //     vector<int> path;
    //     getPaths(root,sum,path,paths);
    //     return paths;
    //}
 vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int> > paths;
        vector<int> path;
        findPaths(root, sum, path, paths,0);
        return paths;  
    }

    void findPaths(TreeNode* node, int sum, vector<int>& path, vector<vector<int> >& paths, int curSum) {
        if (!node) return;
        
        curSum+=node->val;
        path.push_back(node -> val);
        
        
        if (!(node -> left) && !(node -> right) && sum == curSum)//leaf
            paths.push_back(path);
        findPaths(node -> left,sum, path, paths,curSum);
        findPaths(node -> right, sum, path, paths,curSum);
        path.pop_back();
    }
};