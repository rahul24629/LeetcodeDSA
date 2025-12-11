class Solution {
public:
    bool isIdentical(TreeNode* r1, TreeNode* r2){
        if(r1 == nullptr && r2 == nullptr) return true;
        if(r1 == nullptr || r2 == nullptr) return false;
        if(r1->val != r2->val) return false;

        return isIdentical(r1->left, r2->left) &&
               isIdentical(r1->right, r2->right);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return isIdentical(p, q);
    }
};
