class Solution {
public:
    int gcd(int maxi, int mini) {
        while (mini != 0) {
            int rem = maxi % mini;

            maxi = mini;
            mini = rem;
        }

        return maxi;
    }
    int findGCD(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;

        for (int x : nums) {
            maxi = max(maxi, x);
            mini = min(mini, x);
        }

        return gcd(maxi, mini);
    }
};