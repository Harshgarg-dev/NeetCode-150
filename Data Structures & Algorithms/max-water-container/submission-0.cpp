class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater = INT_MIN;
        int l =0;
        int r = heights.size()-1;

        while(l<r){
            int heigh = min(heights[l],heights[r]);
            maxWater = max(maxWater, heigh*(r-l));

            if(heights[l]>heights[r]){
                r--;
            }else{
                l++;
            }
        }

        return maxWater;
    }
};
