class Solution {
    list<int> *l;
public:
    bool pathHelper(int src,int dest,vector<bool>&vis){
        if(src==dest) return true;
        vis[src]=true;
        for(int v:l[src]){
            if(!vis[v]){
                if(pathHelper(v,dest,vis)){
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        l=new list<int>[n];
        for(auto &e:edges){
            l[e[0]].push_back(e[1]);
            l[e[1]].push_back(e[0]);
        }
        vector<bool>vis(n,false);
        return pathHelper(source,destination,vis);
    }
};