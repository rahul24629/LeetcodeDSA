class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>ans;
        int k=1;
        int countXFreq=0;

        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                mp[k++]=i;
                countXFreq++;
            }
        }

        for(int j=0;j<queries.size();j++){
            if(queries[j]>countXFreq){
                ans.push_back(-1);
            }else{
                ans.push_back(mp[queries[j]]);
            }
        }

        return ans;
        
    }
};