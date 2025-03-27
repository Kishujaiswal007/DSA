import java.util.Arrays;

class Solution {
    public int maxFrequency(int[] nums, int k) {
        Arrays.sort(nums); 
        int l = 0, maxFreq = 1;
        long totalOperations = 0; 

        for (int r = 1; r < nums.length; r++) {
            totalOperations += (long) (nums[r] - nums[r - 1]) * (r - l);

            
            while (totalOperations > k) {
                totalOperations -= nums[r] - nums[l];
                l++;
            }

            maxFreq = Math.max(maxFreq, r - l + 1); 
        }

        return maxFreq;
    }
}
