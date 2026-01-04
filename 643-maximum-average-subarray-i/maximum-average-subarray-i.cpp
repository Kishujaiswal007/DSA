class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_avg=0;
        for(int i=0;i<k;i++){
            max_avg +=nums[i];
        }
        double ans=max_avg;
        for (int i=k;i<nums.size();i++){
            max_avg +=nums[i];
            max_avg -= nums[i-k];
            ans=max(ans,max_avg);
        }return ans/k;
    } 
};