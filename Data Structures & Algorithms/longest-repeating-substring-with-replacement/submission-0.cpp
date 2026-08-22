class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[26] = {0};
        int l =0;
        int r =0;
        int maxfreq = INT_MIN;
        int maxLen = INT_MIN;

        while(r<s.size()){
            freq[s[r]-'A']++;
            maxfreq = max(maxfreq, freq[s[r]-'A']);
            while((r-l+1)-maxfreq >k){
                freq[s[l]-'A']--;
                l++;
            }

            maxLen = max(maxLen, r-l+1);
            r++;
        } 
        
        return maxLen;
    }
};
