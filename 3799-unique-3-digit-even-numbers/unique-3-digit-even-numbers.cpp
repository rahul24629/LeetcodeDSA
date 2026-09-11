class Solution {
public:
    int totalNumbers(vector<int>& digits) {

        int count=0;
        unordered_map<int,int> mp;

        for(int i=0;i<digits.size();i++){
            if(digits[i] == 0) continue;
            for(int j=0;j<digits.size();j++){
                if(j==i) continue;
                for(int k=0;k<digits.size();k++){
                    if(k==j || k==i) continue;
                     if(digits[k] % 2 != 0) continue;
                     int num=(digits[i]*10+ digits[j])*10 + digits[k];
                     if(mp.find(num)==mp.end()){
                        count++;
                        mp[num]=1;

                     }else continue;
                    
                }
            }
        }
        return count;

        
    }
};