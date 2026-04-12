class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int i=0;
        int x=1;
        while(i!=target.size()){
            if(target[i]==x){
                ans.push_back("Push");
                i++;
                x++;
            }else{
                ans.push_back("Push");
                ans.push_back("Pop");
                x++;
            }
        }
        return ans;

        
    }
};