class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0;
        int el1=0;

        int count2=0;
        int el2=0;

        for(int i=0;i<nums.size();i++){
            if(count1==0 && nums[i]!=el2){
                count1=1;
                el1=nums[i];
            }else if(count2==0 && nums[i]!=el1){
                count2=1;
                el2=nums[i];
            }else if(nums[i]==el1){
                count1++;
            }else if(nums[i]==el2){
                count2++;
            }else{
                count1--;
                count2--;
            }
        }

        //manuel check
        count1=0;
        count2=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==el1){
                count1++;
            }else if(nums[i]==el2){
                count2++;
            }
        }

        vector<int> ans;
        int minimal= nums.size()/3 + 1;
        if(count1>=minimal){
            ans.push_back(el1);
        }

        if(count2>=minimal){
            ans.push_back(el2);
        }

        return ans;
        
    }
};