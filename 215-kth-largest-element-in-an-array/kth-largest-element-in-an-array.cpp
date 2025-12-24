class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq(nums.begin(),nums.end());
        for(int i=0;i<k;i++){
            if(i!=k-1){
                pq.pop();
            }
        }
        return pq.top();  
    }
};