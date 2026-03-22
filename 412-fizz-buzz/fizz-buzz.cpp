class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int count3=0;
        int count5=0;
        vector<string> ans;
        int i=1;
        while(i<=n){
            count3++;
            count5++;
            if(count3==3 && count5==5){
                ans.push_back("FizzBuzz");
                count3=0;
                count5=0;
            }else if(count3==3){
                ans.push_back("Fizz");
                count3=0;
            }else if(count5==5){
                ans.push_back("Buzz");
                count5=0;
            }else{
                ans.push_back(to_string(i));
            }
            i++;
        }
        return ans;
        
    }
};