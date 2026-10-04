class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       int left=0,prod=1;
       int count=0;
       if (k <= 1) return 0;
       for(int i=0;i<nums.size();i++){
        prod*=nums[i];
        while(prod>=k){
            prod/=nums[left];
            left++;
        } count += i - left + 1;
       } return count;
    }
};