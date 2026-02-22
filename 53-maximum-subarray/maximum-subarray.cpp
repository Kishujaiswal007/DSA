//KADANE'S ALGORITHM

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=nums[0];
        int maxSum=nums[0];
        for(int i=1;i<nums.size();i++){
            currSum=max(nums[i],currSum+nums[i]); // this will take care that if currsum is negative then we will start from that elem
            maxSum=max(maxSum,currSum);
        } return maxSum;
    }
};