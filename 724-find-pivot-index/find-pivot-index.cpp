class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totSum=0;
        for(int i =0;i<nums.size();i++){
            totSum+=nums[i];
        }
        int leftSum=0;
        for(int j=0;j<nums.size();j++){
            int rightSum=totSum-leftSum-nums[j];
            if(leftSum==rightSum){
                return j;
            }
            leftSum +=nums[j];
        }
        return -1;
    }
};