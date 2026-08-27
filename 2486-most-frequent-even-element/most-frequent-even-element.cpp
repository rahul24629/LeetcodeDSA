class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0) continue;
            else{
                if(mp.find(nums[i])==mp.end()){
                    mp[nums[i]]=1;
                }else mp[nums[i]]++;
            }
        }

        int maxi=INT_MIN;
        int ans=-1;

        for(auto &p:mp){
            if(maxi<p.second){
                maxi=p.second;
                ans=p.first;
            }else if(maxi==p.second){
                if(p.first<ans){
                    ans=p.first;
                }else{
                    continue;
                }
            }else{
                continue;
            }
        }

        return ans;

        
    }
};