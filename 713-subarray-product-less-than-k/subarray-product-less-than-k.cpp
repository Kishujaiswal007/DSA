class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left=0;
        int pro=1;
        int count=0;
        if (k <= 1) return 0;
        for(int right=0;right<nums.size();right++){
            pro *= nums[right];

            // if(nums[right]<k){
            //     count++;
            // }
            while(pro>=k){
                pro /= nums[left];
                left++;
            }
            count += right - left + 1;
        } return count;
    }
};