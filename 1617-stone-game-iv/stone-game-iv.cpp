class Solution {
public:
    vector<int> dp;

    bool solve(int n) {
        if (n == 0) return false;
        
        if (dp[n] != -1)
            return dp[n];

        int root = sqrt(n);

        for (int i = root; i >= 1; i--) {
            if (!solve(n - i * i)) {
                return dp[n] = true;
            }
        }

        return dp[n] = false;
    }

    bool winnerSquareGame(int n) {
        dp.resize(n + 1, -1);
        return solve(n);
    }
};