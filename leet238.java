class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] Left = new int[n]; 
        int[] Right = new int[n];
        
        Left[0] = 1;
        for (int i = 1; i < n; i++) {
            Left[i] = Left[i - 1] * nums[i - 1];
        }

        Right[n - 1] = 1;
        for (int i = n-2; i > -1; i--) {
            Right[i] = Right[i + 1] * nums[i + 1];
        }

        int[] ans = new int[n];
        for (int i = 0; i < n; i++) {
            ans[i] = Left[i] * Right[i];
        }
        return ans;
    }
}