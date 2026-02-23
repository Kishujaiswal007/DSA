class Solution {
public:
    int helper(vector<int>&nums,int low,int high,int target){
        if(low > high)
            return -1;
            int mid=low+(high-low)/2;
             if (nums[mid] == target){
                return mid;
            }
            if(nums[low]<=nums[mid]){
                if(nums[low]<= target && target < nums[mid]){
                    // high=mid-1;
                    return helper(nums,low,mid-1,target);
                }
                else{
                    // low=mid+1;
                    return helper(nums,mid+1,high,target);
                }
            }
            else {
                if(nums[mid]< target && target <= nums[high]){
                    // low=mid+1;
                    return helper(nums,mid+1,high,target);
                }
                else{
                    // high=mid-1;
                    return helper(nums,low,mid-1,target);
                }
            }
    
    }


    int search(vector<int>& nums, int target) {
        return helper(nums,0,nums.size()-1,target);  
        }
    
};