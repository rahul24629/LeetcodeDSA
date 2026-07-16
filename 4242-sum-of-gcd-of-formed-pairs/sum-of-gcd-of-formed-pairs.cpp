class Solution {
public:
    long long gcdAns(int a,int b){
        while(b!=0){
            int rem= a%b;

            a=b;
            b=rem;
        }

        return a;
    }
    long long gcdSum(vector<int>& nums) {
        int maxi=-1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi) maxi=nums[i];

            int gcd= gcdAns(nums[i],maxi);

            ans.push_back(gcd);
        }

        sort(ans.begin(),ans.end());

        int st=0;
        int end=ans.size()-1;

        long long finalAns=0;

        while(st<end){
            finalAns+=gcd(ans[st],ans[end]);

            st++;
            end--;

        }

        return finalAns;
        
    }
};