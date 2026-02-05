class Solution {
    list<int> *l;
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        queue<int> q;
        vector<int> color(n, -1);

        l = new list<int>[n];
        for (int i = 0; i < n; i++) {
            for (int v : graph[i]) {
                l[i].push_back(v);
            }
        }
        for (int i = 0; i < n; i++) {
            if (color[i] == -1) {
                q.push(i);
                color[i] = 0;
                while (!q.empty()) {
                    int curr = q.front();
                    q.pop();
                    for (int v : l[curr]) {
                        if (color[v] == -1) {
                            color[v] = !color[curr];
                            q.push(v);
                        } else if (color[v] == color[curr]) {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
