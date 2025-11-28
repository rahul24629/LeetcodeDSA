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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==nullptr){
            return ans;
        }
        vector<int>leftAns= postorderTraversal(root->left);
        ans.insert(ans.end(),leftAns.begin(),leftAns.end());
        vector<int> rightAns=postorderTraversal(root->right);
        ans.insert(ans.end(),rightAns.begin(),rightAns.end());
        ans.push_back(root->val);
        return ans;        
    }
};