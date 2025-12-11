class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> finalAns;
        if(root == nullptr) return finalAns;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> ans;
            for(int i = 0; i < size; i++){
                Node* curr = q.front();   
                q.pop();
                ans.push_back(curr->val);  
                for(Node* child : curr->children){
                    if(child != nullptr) q.push(child);
                }
            }
            finalAns.push_back(ans);
        }
        return finalAns;
    }
};
