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
class BSTIterator {
    
    
public:
    vector<int> arr; 
    int x=0;
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);
        
    }
    BSTIterator(TreeNode* root) {
   inorder(root); //constructor
    }
    
    int next() {
          return arr[x++]; 
         //naive tc O(1)
                                     //SC 0(n)
    }
    
    bool hasNext() {
       return x< arr.size();
    }
    
    //OPTIMAL tc O(1)
    //SC 0(H)
    
    /*
    class BSTIterator {
    stack<TreeNode *> myStack;
public:
    BSTIterator(TreeNode *root) {
        pushAll(root);
    }

    /** @return whether we have a next smallest number */
    /*bool hasNext() {
        return !myStack.empty();
    }

    /** @return the next smallest number */
    /*int next() {
        TreeNode *tmpNode = myStack.top();
        myStack.pop();
        pushAll(tmpNode->right);
        return tmpNode->val;
    }

private:
    void pushAll(TreeNode *node) {
        for (; node != NULL; myStack.push(node), node = node->left);
        */
    
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */