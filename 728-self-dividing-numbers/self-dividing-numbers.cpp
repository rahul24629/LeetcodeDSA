class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            int temp = i;
            bool ok = true;
            while (temp > 0) {
                int rem = temp % 10;
                if (rem == 0 || i % rem != 0) {
                    ok = false;
                    break;
                }

                temp /= 10;
            }
            if (ok) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
