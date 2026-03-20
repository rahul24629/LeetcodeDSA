class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
        }

        vector<int> unique;
        for (auto it : freq) {
            unique.push_back(it.first);
        }

        sort(unique.begin(), unique.end());

        for (int i = 0; i < unique.size(); i++) {
            for (int j = i + 1; j < unique.size(); j++) {
                if (freq[unique[i]] != freq[unique[j]]) {
                    return {unique[i], unique[j]};
                }
            }
        }

        return {-1, -1};
    }
};