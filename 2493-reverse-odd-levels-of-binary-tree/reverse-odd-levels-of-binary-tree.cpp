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
    void dfs(TreeNode* lefti, TreeNode* righti,int level){
        if(lefti==nullptr || righti==nullptr) return;
        if(level%2==1) swap(lefti->val,righti->val);
        dfs(lefti->left,righti->right,level+1);
        dfs(lefti->right,righti->left,level+1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root==nullptr) return nullptr;
        dfs(root->left,root->right,1);
        return root;
    }
};