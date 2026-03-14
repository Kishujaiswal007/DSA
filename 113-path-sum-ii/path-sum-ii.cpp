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
    void helper(TreeNode* root, int targetSum,
                vector<int>& path,
                vector<vector<int>>& result) {

        if(root == NULL) return;

        path.push_back(root->val);

        if(root->left == NULL && root->right == NULL && targetSum == root->val){
            result.push_back(path);
        }

        helper(root->left, targetSum - root->val, path, result);
        helper(root->right, targetSum - root->val, path, result);

        path.pop_back();  // backtracking
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        vector<int> path;

        helper(root, targetSum, path, result);

        return result;
    }
};
