class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, right = 0, maxLen = 0, zeroCount = 0;
        
        while (right < nums.size()) {
            if (nums[right] == 0) {
                zeroCount++;
            }
            
            while (zeroCount > 1) {
                if (nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }
            
            maxLen = max(maxLen, right - left);
            right++;
        }
        
        return maxLen;
    }
};