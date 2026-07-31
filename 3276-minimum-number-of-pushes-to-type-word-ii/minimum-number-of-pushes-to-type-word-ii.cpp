class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int> mp;

        for (int i = 0; i < word.size(); i++) {
            if (mp.find(word[i]) != mp.end()) {
                mp[word[i]]++;
            } else {
                mp[word[i]] = 1;
            }
        }

        vector<int> freq;
        for(auto it:mp){
            freq.push_back(it.second);
        }

        sort(freq.begin(),freq.end(),greater<int>());

        int ans=0;
         for (int i = 0; i < freq.size(); i++) {
            if (i < 8) {
                ans += freq[i];
            } else if (i < 16) {
                ans += freq[i] * 2;
            } else if (i < 24) {
                ans += freq[i] * 3;
            } else {
                ans += freq[i] * 4;
            }
        }

        return ans;
    }
};