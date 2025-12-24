class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalApple = 0;
        for (int a : apple) totalApple += a;
        sort(capacity.begin(), capacity.end(), greater<int>());
        int bucket = 0, ans = 0;
        for (int c : capacity) {
            if (bucket >= totalApple) break;
            bucket += c;
            ans++;
        }
        return ans;
    }
};
