class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int ans=-1;
        for(int i=0;i<capacity.size();i++){
            if(capacity[i]>=itemSize && (ans == -1 ||capacity[ans]>capacity[i])){
                ans=i;
            }
        }
        return ans;
    }
};