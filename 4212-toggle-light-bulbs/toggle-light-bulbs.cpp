class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int> freq;
        for(int i=0;i<bulbs.size();i++){
            freq[bulbs[i]]++;
        }
        vector<int> ans;
        for(auto i:freq){
            if(i.second %2!=0) ans.push_back(i.first);
        }
        sort(ans.begin(),ans.end());
        return ans;

        
    }
};