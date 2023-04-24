class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {  // if root node is null
            return false;  // no path exists
        }
        
        if (root->left == nullptr && root->right == nullptr) {  // if leaf node is reached
            return targetSum == root->val;  // check if target sum is equal to current value
        }
        
        bool left = hasPathSum(root->left, targetSum - root->val);  // recursively call function for left subtree
        bool right = hasPathSum(root->right, targetSum - root->val);  // recursively call function for right subtree
        
        return left || right;  // if either of the subtree returns true, then path exists
    }
};