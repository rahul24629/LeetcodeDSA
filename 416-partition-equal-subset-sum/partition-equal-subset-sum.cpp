class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int el:nums){
            sum+=el;
        }
        int n=nums.size();
        int w=sum/2;
        vector<vector<int>> dp(n+1,vector<int>(w+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=w;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=max(nums[i-1]+ dp[i-1][j-nums[i-1]], dp[i-1][j]);
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        int count1=dp[n][w];
        int count2=sum-dp[n][w];
        return count1==count2;
    }
};