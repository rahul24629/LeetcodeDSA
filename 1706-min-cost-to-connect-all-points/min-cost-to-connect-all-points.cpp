class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int V=points.size();
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<bool> mst(V,false);
        vector<int> dist(V,INT_MAX);
        pq.push({0,0});
        int minCost=0;
        while(!pq.empty()){
            auto [wt,u]=pq.top();
            pq.pop();
            if(mst[u]) continue;
            mst[u]=true;
            minCost+=wt;
            for(int v=0;v<V;v++){
                if(!mst[v]){
                    int wt= abs(points[u][0]-points[v][0])+ abs(points[u][1]-points[v][1]);
                    if(wt<dist[v]){
                        dist[v]=wt;
                        pq.push({wt,v});
                    }
                }
            }
        }
        return minCost;
    }
};