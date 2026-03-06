class Solution {
public:

    void helper(vector<int>& nums,vector<int>& current,vector<bool>& used,vector<vector<int>>& result){

        // Base case
        if(current.size() == nums.size()){
            result.push_back(current);
            return;
        }

        for(int i = 0; i < nums.size(); i++){

            if(used[i]) continue;   // skip used numbers
            current.push_back(nums[i]); // push the elem to current
            used[i] = true; // update it to true

            helper(nums, current, used, result);// recursive call
            current.pop_back();// backtrack
            used[i] = false; // so that again it can be use by other branches
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> result;
        vector<int> current;
        vector<bool> used(nums.size(), false); // for keeping track of used elem

        helper(nums, current, used, result);

        return result;
    }
};