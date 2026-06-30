class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;

        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])!=mp.end()){
                mp[arr[i]]++;
            }else{
                mp[arr[i]]=1;
            }
        }

        int j=0;

        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==1){
                j++;
                if(j==k){
                    return arr[i];
                }
            }
        }

        return "";
        
    }
};