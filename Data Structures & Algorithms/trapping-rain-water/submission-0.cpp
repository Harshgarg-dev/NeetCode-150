class Solution {
public:
    int trap(vector<int>& height) {
        int rightMax = height[height.size()-1];
        int leftMax = height[0];
        int totalWater = 0;
        int l =1;
        int r =height.size()-2;

        while(l<=r){

            if(leftMax<rightMax){
                if(height[l]<leftMax){
                    totalWater += leftMax-height[l];
                }else{
                    leftMax = max(leftMax, height[l]);
                }
                l++;
            }
            else{
                if(height[r]<rightMax){
                    totalWater += rightMax-height[r];
                }else{
                    rightMax = max(rightMax, height[r]);
                }
                r--;
            }
        }
        return totalWater;

    }
};
