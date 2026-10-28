class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int ans = INT_MAX;

        while(low<high){
            int mid = low + (high-low)/2;

            if(nums[mid]>nums[high]){
                low = mid+1;
            }else{
                high = mid;
            }
        }

        int cut = low;

        low = 0;
        high = cut-1;
        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid] >target){
                high = mid-1;
            }else if(nums[mid] <target){
                low = mid+1;
            }else{
                ans = mid;
                break;
            }
        }
        low = cut;
        high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid] >target){
                high = mid-1;
            }else if(nums[mid] <target){
                low = mid+1;
            }else{
                ans = mid;
                break;
            }
        }

        if(ans != INT_MAX) return ans;
        return -1;
        
    }
};
