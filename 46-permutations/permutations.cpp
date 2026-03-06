class Solution {
public:
void fun(vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans,int ind)
{
    if(ind==nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for(int i=ind;i<nums.size();i++)
    {
        swap(nums[ind],nums[i]);
        fun(nums,temp,ans,ind+1);
        swap(nums[ind],nums[i]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        fun(nums,temp,ans,0);
        return ans;
    }
};