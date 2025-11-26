class Solution {
public:
    static bool compare(const vector<int>& p1, const vector<int>& p2){
        return p1[1] < p2[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
        sort(pairs.begin(), pairs.end(), compare);
        int ans = 1;
        int curr = pairs[0][1];
        for(int i = 1; i < n; i++){
            if(pairs[i][0] > curr){
                ans++;
                curr = pairs[i][1];
            }
        }
        return ans;
    }
};
