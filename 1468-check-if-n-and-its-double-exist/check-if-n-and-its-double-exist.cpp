class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int a:arr){
            if(mp.count(a*2)|| (mp.count(a/2) && a%2==0)){
                return true;
            }else{
                mp[a]++;
            }
        }
        return false;
    }
};