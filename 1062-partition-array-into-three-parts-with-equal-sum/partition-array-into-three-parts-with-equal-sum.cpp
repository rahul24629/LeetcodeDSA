class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int totalSum = 0;
        for(int i = 0; i < arr.size(); i++){
            totalSum += arr[i];
        }

        if(totalSum % 3 != 0){
            return false;
        }
        else{
            int target = totalSum / 3;
            int prefixSum = 0;
            int count = 0;

            for(int i = 0; i < arr.size(); i++){
                prefixSum += arr[i];

                if(prefixSum == target){
                    count++;
                    target += totalSum / 3; 
                }

                if(count == 2 && i < arr.size() - 1) 
                    return true; 
            }
        }
        return false;
    }
};
