class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int freq[128] = {0};
        int maxLen = 0;
        int l =0;
        int r =0;
        
        while(r<s.size()){

            freq[s[r]]++;
               
            while(freq[s[r]] > 1){
                freq[s[l]]--;
                l++;
            }

            maxLen = max(maxLen, r-l+1);
            r++;
        }

        return maxLen;
    }
};
