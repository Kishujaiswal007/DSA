class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=INT_MIN;
        double sum=0;
        int i=0;
        for( i=0;i<k;i++){
            sum+=nums[i];
        }
        ans=sum/k;
        for(i=k;i<nums.size();i++){
                 sum+=nums[i];
            sum-=nums[i-k];
            ans=max(ans,sum/k);
        }
        ans=max(ans,sum/k);
        return ans;
    }
};