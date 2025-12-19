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
    void getInOrder(TreeNode* root, vector<int>& nodes){
        if(root == nullptr) return;
        getInOrder(root->left, nodes);
        nodes.push_back(root->val);
        getInOrder(root->right, nodes);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> nodes1;
        vector<int> nodes2;
        vector<int> merged;
        
        getInOrder(root1, nodes1);
        getInOrder(root2, nodes2);

        int i = 0, j = 0;
        while(i < nodes1.size() && j < nodes2.size()){
            if(nodes1[i] > nodes2[j])
                merged.push_back(nodes2[j++]);
            else
                merged.push_back(nodes1[i++]);
        }

        while(i < nodes1.size())
            merged.push_back(nodes1[i++]);

        while(j < nodes2.size())
            merged.push_back(nodes2[j++]);

        return merged;
    }
};
