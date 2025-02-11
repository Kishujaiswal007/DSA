class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int K=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int j=i+1,k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>K)
                    k--;
                 else if(sum<K)
                    j++;
                else 
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    while(j<k&&nums[j]==nums[j+1])
                        j++;
                    while(j<k&&nums[k]==nums[k-1])
                        k--;
                    j++;
                k--;
            }
            }
            while(i<k-1&&nums[i]==nums[i+1])
                i++;
            
        }
        return ans;
}
    };