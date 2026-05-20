class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();

        vector<int> ansArr(n);

        unordered_map<int,int> mp ;//val,occurance

        int ans=0;

        for(int i=0;i<n;i++){
            if(A[i]==B[i]){
                if(mp.find(A[i]) != mp.end()){
                    mp[A[i]]=2;
                }else{
                    mp[A[i]]++;
                }

                ans++;
                ansArr[i]=ans;
            }else{
                if(mp.find(A[i]) == mp.end()){
                    mp[A[i]]=1;
                }else{
                    mp[A[i]]++;
                    ans++;
                }

                if(mp.find(B[i]) == mp.end()){
                    mp[B[i]]=1;
                }else{
                    mp[B[i]]++;
                    ans++;
                }

                ansArr[i]=ans;

            }

        }

        return ansArr;
        
    }
};