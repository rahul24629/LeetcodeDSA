class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> ans(nums.size(), -1);

        for (int i = 0; i < nums.size(); i++) {
            nums[i] = 1LL*nums[i] * nums[i];
        }

        sort(nums.begin(), nums.end());
        int k = 0;

        for (int i = nums.size() - 1; i >= nums.size() / 2; i--) {
            ans[k] = nums[i];
            k += 2;

            if (k > nums.size())
                break;
        }

        int j=nums.size()/2 -1 ;

        for(int i=0;i<ans.size();i++){
            if(ans[i]==-1){
                ans[i]=nums[j];
                j--;
            }
        }
        long long finalAns=0;

        for(int i=0;i<ans.size();i++){
            if(i%2==0){
                finalAns+=ans[i];
            }else{
                finalAns-=ans[i];
            }
        }

        return finalAns;
    }
};