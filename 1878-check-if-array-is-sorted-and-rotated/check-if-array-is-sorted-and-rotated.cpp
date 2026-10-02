class Solution {
public:
    bool check(vector<int>& nums) {
        int count =0;
        int i=0;
        int j=1;
        for(int i=0;i<nums.size()-1;i++){
            if (nums[j]<nums[i]){
                count++;
            }
            j++;
        }
        if(nums[nums.size()-1]>nums[0]){
            count++;
        }
        if(count<=1){
            return true;
        }
        else return false;
    }};