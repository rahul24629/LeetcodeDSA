class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        //maximum sum subarray
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxi<sum?maxi=sum:maxi=maxi;
            sum<0?sum=0:sum=sum;
        }

        //min sum subarray
        int mini=INT_MAX;
        int sum2=0;
        for(int i=0;i<nums.size();i++){
            sum2+=nums[i];
            mini>sum2?mini=sum2:mini=mini;
            sum2>0?sum2=0:sum2=sum2;
        }

        return max(abs(maxi),abs(mini));


        
    }
};