class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int finalSum=nums[0];
        int currSum=nums[0];
        for(int i=1;i<nums.size();i++){
           currSum = max(nums[i], currSum + nums[i]);
            finalSum=max(currSum,finalSum);
        }
        return finalSum;
    }
};