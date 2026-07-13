class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        vector<int> ans;

        for(int len = 2; len <= 9; len++) {

            string num = "";

            for(int i = 0; i + len <= s.size(); i++) {

                num = s.substr(i, len);

                int number = stoi(num);

                if(low <= number && number <= high)
                    ans.push_back(number);
            }
        }

        return ans;
    }
};