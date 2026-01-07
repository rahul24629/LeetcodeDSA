class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int c:nums){
            mp[c]++;
        }
        int dub=-1;
        int miss=-1;
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==2) dub=i;
            if(mp[i]==0) miss=i;
        }
        return {dub,miss};
    }
};