class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int org=nums[i];
            int ans=0;
            while(nums[i]>0){
                int rem=nums[i]%10;
                ans+=rem;
                nums[i]/=10;
            }
            if(ans==i) return i;
        }
        return -1;
    }
};