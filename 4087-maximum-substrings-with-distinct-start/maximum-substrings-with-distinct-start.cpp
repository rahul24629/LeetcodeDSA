class Solution {
public:
    int maxDistinct(string s) {
        int freq[26]={0};
        for(char c:s){
            int idx=c-'a';
            if(freq[idx]==0){
                freq[idx]++;
            }else{
                continue;
            }
        }
        int ans=0;
        for(int i=0;i<26;i++){
            ans+=freq[i];
        }
        return ans;
        
    }
};