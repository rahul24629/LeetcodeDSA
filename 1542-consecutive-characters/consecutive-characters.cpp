class Solution {
public:
    int maxPower(string s) {
        int curr=1;
        int maxi=1;
        for(int i=1;i<s.size();i++){
            if(s[i-1]!=s[i]) curr=1;
            else{
                curr++;
                maxi=max(maxi,curr);
            }
        }
        return maxi;
    }
};