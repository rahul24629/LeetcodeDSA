class Solution {
    list<int> *l;
public:
    bool dfs(int src,vector<bool>&vis,vector<bool>&reacPath){
        vis[src]=true;
        reacPath[src]=true;
        for(int v:l[src]){
            if(!vis[v]){
                if(dfs(v,vis,reacPath)){
                    return true;
                }
            }else{
                if(reacPath[v]){
                    return true;
                }
            }
        }
        reacPath[src]=false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        l=new list<int>[numCourses];
        for(auto &p:prerequisites){
            l[p[1]].push_back(p[0]);
        }
        vector<bool>vis(numCourses,false);
        vector<bool>recPath(numCourses,false);
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(dfs(i,vis,recPath)){
                    return false;
                }
            }
        }
        return true;
    }
};