class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score = 0;
        int counter = 0;

        for(string c : events) {

            if(counter == 10) break;

            if(c == "W") {
                counter++;
            }
            else if(c == "WD" || c == "NB") {
                score++;
            }
            else {
                score += stoi(c);
            }
        }

        return {score, counter};
    }
};