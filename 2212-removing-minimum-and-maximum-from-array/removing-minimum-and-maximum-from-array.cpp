class Solution { 
public: 
    int minimumDeletions(vector<int>& nums) { 
        int minVal = INT_MAX; 
        int minIdx = -1; 
 
        int maxVal = INT_MIN; 
        int maxIdx = -1; 
 
        for(int i = 0; i < nums.size(); i++){ 
            if(minVal > nums[i]){ 
                minVal = nums[i]; 
                minIdx = i; 
            }

            if(maxVal < nums[i]){ 
                maxVal = nums[i]; 
                maxIdx = i; 
            } 
        } 
        
        int n = nums.size(); 
 
        int left = min(minIdx, maxIdx);
        int right = max(minIdx, maxIdx);
        int ans1 = right + 1;
        int ans2 = n - left;
        int ans3 = left + 1 + n - right;

        return min({ans1, ans2, ans3});
    } 
};