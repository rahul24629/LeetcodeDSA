class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int freq[26] = {0};

        for(char c : s){
            freq[c - 'a']++;
        }

        int val = 0;

        for(int i = 0; i < 26; i++){
            if(freq[i] > 0){
                if(val == 0) val = freq[i];
                else if(freq[i] != val) return false;
            }
        }

        return true;
    }
};