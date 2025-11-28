class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int size = f.size();  
        for(int i = 0; i < size && n > 0; i++) {
            if(f[i] == 0) {
                int left  = (i == 0) || (f[i-1] == 0);
                int right = (i == size-1) || (f[i+1] == 0);
                if(left && right) {
                    f[i] = 1;  
                    n--;        
                }
            }
        }
        return n == 0;
    }
};
