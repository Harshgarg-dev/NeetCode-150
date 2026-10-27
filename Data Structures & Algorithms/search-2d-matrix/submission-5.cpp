class Solution {
private:
    bool searcharr(vector<vector<int>>& matrix, int target, int row){
        int low = 0;
        int high = matrix[row].size()-1;
        
        while(low<=high){
            int mid = low + (high - low) / 2;

            if(matrix[row][mid] >target){
                high = mid-1;
            }else if(matrix[row][mid] <target){
                low = mid+1;
            }else{
                return true;
            }
        }
        return false;
    }

public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int noOfRows = matrix.size();
        int noOfCol = matrix[0].size();
        for(int i =0; i< noOfRows; i++){
            if(matrix[i][0]<= target && matrix[i][noOfCol-1]>= target){
                return searcharr(matrix, target, i);
            }
        } 
        return false;
    }
};
