class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int tsum=(n * (n + 1)) / 2;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        int ans=tsum-sum;
        return ans;

    }
}