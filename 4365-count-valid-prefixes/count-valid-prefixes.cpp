class Solution {
public:
    int countValidPrefixes(string s) {
        int zeroCount=0;
        int oneCount=0;

        int ans=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='0') zeroCount++;
            else oneCount++;

            if(abs(zeroCount-oneCount)<=1) ans++;
        }
        
        return ans;
    }
};