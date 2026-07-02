class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int minPrice = prices[0];
     int profit=0;
     for(int i=1;i<prices.size();i++){
        minPrice=min(minPrice,prices[i]);
        int temp;
        temp=prices[i]-minPrice;
        profit=max(temp,profit);
        temp=0;
     }   return profit;
    }
};