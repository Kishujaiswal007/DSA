class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int buyback = prices[0];
     int profit=0;
     for(int i=1;i<prices.size();i++){
        buyback=min(buyback,prices[i]);
        int temp;
        temp=prices[i]-buyback;
        profit=max(temp,profit);
        temp=0;
     }   return profit;
    }
};