class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int total = 0;

        for (int num : nums) {
            string s = to_string(num);

            char max_digit = *max_element(s.begin(), s.end());

            int len = s.length();

            string encrypted_str(len, max_digit);

            total += stoi(encrypted_str);
        }
        return total;
    }
};