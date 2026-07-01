class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> freq(k,0);

        for(int i=0;i<arr.size();i++){
            int rem=((arr[i]%k)+k)%k;
            freq[rem]++;
        }

        if(freq[0]%2!=0) return false;

        for(int rem=1;rem<=k/2;rem++){
            if(rem==k-rem){
                if(freq[rem]%2!=0) return false;
            }else{
                if(freq[rem]!=freq[k-rem]) return false;
            }
        }

        return true;


        
    }
};