class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int>mp;
        for(int candy:candyType){
            mp.insert(candy);
        }
        int n=candyType.size();
        return min(n/2,(int)mp.size());
    }
};