class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp; //sum,count
        mp[0]=1;
        int sum=0;
        int ans=0;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
            if(mp.count(sum-k)){
                ans+=mp[sum-k];
            }
            if(mp.count(sum)){
                mp[sum]++;
            }else{
                mp[sum]=1;
            }
        }
        return ans;
        
    }
};