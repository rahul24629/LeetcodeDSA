class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int i=1;
        int count=0;
        sort(nums.begin(),nums.end());
        while(i<nums.size()){
            if(nums[i]<=nums[i-1]){
                nums[i]+=1;
                count++;
            }else{
                i++;
            }
        }
        return count;
    }
};