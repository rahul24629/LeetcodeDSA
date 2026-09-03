class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minimum= *min_element(nums1.begin(),nums1.end());
        bool targetOdd=minimum % 2 ==1;

        for(int i=0;i<nums1.size();i++){
            if(targetOdd){
                if(nums1[i] % 2==1) continue;
                else{
                    nums1[i]-=minimum;
                }
            }else{
                if(nums1[i]%2!=1) continue;
                else{
                    return false;
                }
            }
        }

        return true;
        
    }
};