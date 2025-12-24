class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalApple=0;
        for(int i=0;i<apple.size();i++){ //O(n)
            totalApple+=apple[i];
        }
        int ans=0,bucket=0;
        sort(capacity.begin(), capacity.end(), greater<int>());
        for(int i=0;i<capacity.size();i++){
            if(totalApple <=bucket){
                break;
            }
            bucket+=capacity[i];
            ans++;
        }
        return ans;
    }
};