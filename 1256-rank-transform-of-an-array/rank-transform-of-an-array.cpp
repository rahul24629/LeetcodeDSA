class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.empty()) return {};
        vector<int> arrCopy=arr;
        sort(arr.begin(),arr.end());
        unordered_map<int,int> mp;
        int rank=0;
        mp[arr[0]]=++rank;

        for(int i=1;i<arr.size();i++){
            if(arr[i-1]!=arr[i]){
                mp[arr[i]]=++rank;
            }
        }

        for(int i=0;i<arrCopy.size();i++){
            arrCopy[i]=mp[arrCopy[i]];
        }
        return arrCopy;
        
    }
};