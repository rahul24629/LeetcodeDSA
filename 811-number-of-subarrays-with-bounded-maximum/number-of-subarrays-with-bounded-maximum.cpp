class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int lastGreater=-1;
        int lastValid=-1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>right){
                lastGreater=i;
            }
            if(nums[i]>=left){
                lastValid=i;
            }
            if(lastValid>lastGreater){
                count+=lastValid-lastGreater;
            }
        }
        return count;
    }
};