class Solution {
public:
    void sortColors(vector<int>& arr) {
        int start=0;
        int mid=0;
        int high=arr.size()-1;
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[start],arr[mid]);
                start++;
                mid++;
            }else if(arr[mid]==1){
                mid++;
            }else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }
        
    }
};