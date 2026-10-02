class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totSum=nums[0];
        for(int i=1;i<nums.size();i++){
            totSum+=nums[i];
        }
        int leftSum=0;
        for(int i=0;i<nums.size();i++){
            int rightSum=totSum-nums[i]-leftSum;
            if(leftSum==rightSum){
                return i;
            }
            leftSum+=nums[i];
        }
        return -1;
    }
};