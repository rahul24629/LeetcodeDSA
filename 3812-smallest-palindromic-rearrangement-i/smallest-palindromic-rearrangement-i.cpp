class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26);

        for(char c:s){
            freq[c-'a']++;
        }

        string left="";
        bool mid=false;
        char middle;

        for(int i=0;i<26;i++){
            int size=freq[i]/2;

            for(int j=0;j<size;j++){
                    left+='a' + i;
                }
            if(freq[i]%2!=0){
                mid=true;
                middle='a'+i;
        
            }
        }

        string right=left;
        if(mid){
            left+=middle;
        }

        reverse(right.begin(),right.end());
        return left+=right;

    }
};