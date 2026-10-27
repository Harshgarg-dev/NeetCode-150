class Solution {
private:
    long long int speedForK(vector<int>& piles, int k){
        long long int hour = 0;
        for (int i = 0; i < piles.size(); i++) {
            hour += (piles[i] + k - 1) / k;
        }

        return hour;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int max_pile = piles.back();

        int low =1;
        int high = piles.back();
        int ans = high;

        while(low<=high){
            int mid = low + (high - low) / 2;
            long long int timeReq = speedForK(piles, mid);
            
            if(timeReq > h){
                low = mid+1;
            }else{
                high = mid-1;
                ans = min(ans, mid);
            }
        }
        return ans;
    }
};
