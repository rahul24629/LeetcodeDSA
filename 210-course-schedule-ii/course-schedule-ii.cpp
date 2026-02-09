class Solution {
    list<int>* l;
public:
    bool isCycle(int src, vector<bool>& vis, vector<bool>& rec){
        vis[src] = true;
        rec[src] = true;

        for(int v : l[src]){
            if(!vis[v]){
                if(isCycle(v, vis, rec)) return true;
            }
            else if(rec[v]) return true;
        }

        rec[src] = false;
        return false;
    }

    void topoSort(int src, vector<bool>& vis, stack<int>& s){
        vis[src] = true;
        for(int v : l[src]){
            if(!vis[v]){
                topoSort(v, vis, s);
            }
        }
        s.push(src);
    }

    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        l = new list<int>[n];
        for(auto &p : pre){
            l[p[1]].push_back(p[0]);
        }

        vector<bool> vis(n,false), rec(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(isCycle(i, vis, rec)) return {};
            }
        }

        vector<bool> vis2(n,false);
        stack<int> s;
        for(int i=0;i<n;i++){
            if(!vis2[i]){
                topoSort(i, vis2, s);
            }
        }

        vector<int> ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};
