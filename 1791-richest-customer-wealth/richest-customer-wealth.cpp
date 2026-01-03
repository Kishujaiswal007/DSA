class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
          int maxWealth = 0;

        for (int i = 0; i < accounts.size(); i++) {   // customer loop
            int sum = 0;

            // this is PURE 1D logic
            for (int j = 0; j < accounts[i].size(); j++) {
                sum += accounts[i][j];
            }

            maxWealth = max(maxWealth, sum);
        }

        return maxWealth;
    }
};