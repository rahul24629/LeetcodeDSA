class Solution {
    list<int>*l;
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int>color(n,-1);
        l=new list<int>[n];
        for(auto &d:dislikes){
            l[d[0]-1].push_back(d[1]-1);
            l[d[1]-1].push_back(d[0]-1);
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                q.push(i);
                color[i]=0;
            }
            while(q.size()>0){
                int curr=q.front();
                q.pop();
                for(int v:l[curr]){
                    if(color[v]==-1){
                        color[v]=!color[curr];
                        q.push(v);
                    }else{
                        if(color[v]==color[curr]){
                            return false;
                        }
                    }
                }
            }
        }
        return true;
        
    }
};