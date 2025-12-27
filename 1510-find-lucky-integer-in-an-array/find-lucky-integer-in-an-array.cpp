class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> map;
        for(int el:arr){
            map[el]++;
        }
        int ans=-1;
        for(auto &el:map){
            if(el.first==el.second){
                ans=max(ans,el.first);
            }
        }
        return ans;
        
    }
};