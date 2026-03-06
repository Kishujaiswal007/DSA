class Solution {
public:
    void helper(int index, vector<int>& candidates, int target,
                vector<int>& current, vector<vector<int>>& result) {

        // Base case
        if(target == 0) {
            result.push_back(current);
            return;
        }

        if(index >= candidates.size() || target < 0)
            return;

        // Include current number
        current.push_back(candidates[index]);
        helper(index, candidates, target - candidates[index], current, result);

        current.pop_back(); // backtrack

        // Exclude current number
        helper(index + 1, candidates, target, current, result);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        helper(0,candidates,target,current,result);
        return result;
    }
};