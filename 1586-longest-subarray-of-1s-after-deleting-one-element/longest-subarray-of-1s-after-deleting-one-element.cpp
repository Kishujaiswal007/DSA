class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int one=0,zero=0;
        int i=0,j=0;
        int ans=0;
        while(i<nums.size()){
            if (nums[i]==0){
                zero++;
            }
            else{
                one++;
            } 
            while(zero>1){
               if(nums[j]==0){
                zero--;
               } 
               else {one--;}
               j++;
            } ans=max(ans,i-j);
            i++;
        }
        return ans;
    }
};