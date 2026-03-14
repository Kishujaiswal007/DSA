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
    bool helper(TreeNode* root,int targetSum){
        // int left=0;
        // int right=0;
        // if(root==NULL) return -1;
        // left=helper(root->left,targetSum)+left;
        // right=helper(root->right,targetSum)+right;
        // if(left>targetSum || right>targetSum) return -1;
        // return 1;
        if(root==NULL) return false;
         if(root->left==NULL && root->right==NULL && targetSum==root->val) return true;
       return helper(root->left,targetSum-root->val) || helper(root->right,targetSum-root->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root,targetSum) ;
    }
};