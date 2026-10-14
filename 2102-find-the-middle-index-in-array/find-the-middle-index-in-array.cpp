class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {

        int n=nums.size();

        vector<int> leftSum(n,0);
        vector<int> rightSum(n,0);

        int leftCount=nums[0];
        for(int i=1;i<n;i++){
            leftSum[i]=leftCount;
            leftCount+=nums[i];
        }

        int rightCount=nums[n-1];
        for(int i=n-2;i>=0;i--){
            rightSum[i]=rightCount;
            rightCount+=nums[i];
        }

        int i=0;
        while(i<n){
            if(leftSum[i]==rightSum[i]){
                return i;
            }
            i++;
        }
        return -1;
        
    }
};