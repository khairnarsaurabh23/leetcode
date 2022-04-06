//cpp solution to the Balanced Search Tree problem using recursion.

class Solution {
private:
    //create a private function to count the nodes in probable BST
    int maxDepth(TreeNode* root){
        if(!root)
            return 0;
        return 1+max(maxDepth(root->left), maxDepth(root->right));
    }
public:
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        return abs(maxDepth(root->left)-maxDepth(root->right))<=1 &&
            isBalanced(root->left) &&
            isBalanced(root->right);
    }
};