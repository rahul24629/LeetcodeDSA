class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int x = 1;
        int ans = 0;

        while (true) {
            if (x > n + k) break;   

            if (abs(n - x) <= k) {
                if ((n & x) == 0) ans += x;
            }

            x++;
        }
        return ans;
    }
};