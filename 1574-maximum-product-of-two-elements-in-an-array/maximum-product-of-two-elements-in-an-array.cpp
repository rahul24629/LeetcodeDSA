class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        for(int x:nums){
            pq.push(x);
        }
        int ans=1;
        int k=2;
        while(k!=0){
            ans*=pq.top()-1;
            pq.pop();
            k--;
        }
        return ans;
        
    }
};