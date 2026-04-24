class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int dash=0;
        int left=0;
        int right=0;

        for(int i=0;i<moves.size();i++){
            if(moves[i]=='_')dash++;
            else if(moves[i]=='L') left++;
            else right++;
        }

        return max((dash+left)-right, (dash+right)-left);
        
    }
};