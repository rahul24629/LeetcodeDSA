class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> bestBuy(n);
        bestBuy[0]=INT_MAX;
        for(int i=1;i<n;i++){
            bestBuy[i]=min(prices[i-1],bestBuy[i-1]);
        }
        vector<int> profit(n);
        profit[0]=INT_MIN;
        int ans=INT_MIN;
        for(int i=1;i<n;i++){
            profit[i]=prices[i]-bestBuy[i];
            ans=max(ans,profit[i]);
        }
        return ans<0?0:ans;
        
    }
};