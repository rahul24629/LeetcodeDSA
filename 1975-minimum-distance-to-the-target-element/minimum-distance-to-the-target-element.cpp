class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans=INT_MAX;
        int dist;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                dist=abs(i-start);
                ans=min(ans,dist);
            }
        }
        return ans;
        
    }
};