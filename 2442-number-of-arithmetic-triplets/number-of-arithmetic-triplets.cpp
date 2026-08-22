class Solution { 
public: 
    int arithmeticTriplets(vector<int>& nums, int diff) { 
        int count = 0; 
        
        for(int i = 0; i < nums.size(); i++) { 
            int j = i + 1; 
            int k = nums.size() - 1; 
 
            while(j < k) { 
                if(nums[j] - nums[i] < diff) { 
                    j++; 
                } 
                else if(nums[k] - nums[j] > diff) { 
                    k--; 
                } 
                else if(nums[j] - nums[i] == diff && 
                        nums[k] - nums[j] == diff) { 
                    count++; 
                    break;
                }
                else {
                    k--;
                }
            } 
        } 
        return count; 
    } 
};