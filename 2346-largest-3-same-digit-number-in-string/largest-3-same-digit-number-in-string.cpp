class Solution {
public:
    string largestGoodInteger(string nums) {
        int i=0;
        int j=1;
        int k=2;

        int max = -1 ;

        string ans="";

        while(k < nums.size()){

            if(nums[i]== nums[j] && nums[i] == nums[k] && nums[j] == nums[k]){

                if(max < nums[i] - '0'){
                    max = nums[i] - '0';

                    ans= "";
                    
                    ans+=nums[i];
                    ans+=nums[j];
                    ans+=nums[k];
                }
            }
            i++;
            j++;
            k++;
            
        }

        return ans;
        
    }
};