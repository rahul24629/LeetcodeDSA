class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> list;
            int size=q.size();
            while(size--){
                Node* f=q.front();
                q.pop();
                list.push_back(f->val);
                for(Node* child:f->children){
                    q.push(child);
                }
            }
            ans.push_back(list);
        }
        return ans;
    }
};