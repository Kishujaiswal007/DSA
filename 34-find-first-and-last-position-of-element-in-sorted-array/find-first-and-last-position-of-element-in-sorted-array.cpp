class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
        int ans1=-1;
        vector<int> ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                ans1=mid;
                high=mid-1;
            }} ans.push_back(ans1);

            int low1=0, high1=nums.size()-1;
        int ans2=-1;
        while(low1<=high1){
            int mid1=low1+(high1-low1)/2;
            if(nums[mid1]<target){
                low1=mid1+1;
            }
            else if(nums[mid1]>target){
                high1=mid1-1;
            }
            else{
                ans2=mid1;
                low1=mid1+1;
            }} ans.push_back(ans2);
        return ans;
    }
};