class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int maxSum=0;
        vector<int> ans;
        unordered_map<int,vector<int>> sumToElem;
        for(int i=nums.size()-1;i>=0;i--){
            for(int j=0;j<nums[i].size();j++){
                maxSum=max(maxSum, i+j);
                sumToElem[i+j].push_back(nums[i][j]);
            }
        }
        for(int i=0;i<=maxSum;i++){
            for(auto el: sumToElem[i]){
                ans.push_back(el);
            }
        } return ans;
    }
};