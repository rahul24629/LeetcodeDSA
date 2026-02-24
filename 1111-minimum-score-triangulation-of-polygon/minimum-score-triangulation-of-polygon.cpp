class Solution {
public:
    int minScoreTriangulation(vector<int>& values) {
        int n=values.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int len=2;len<n;len++){
            for(int i=1;i<=n-len;i++){
                int j=i+len-1;
                dp[i][j]=INT_MAX;
                for(int k=i;k<j;k++){
                    int cost1=dp[i][k];
                    int cost2=dp[k+1][j];
                    int currCost=cost1+cost2+(values[i-1]*values[k]*values[j]);
                    dp[i][j]=min(dp[i][j],currCost);
                }
            }
        }
        return dp[1][n-1];
    }
};