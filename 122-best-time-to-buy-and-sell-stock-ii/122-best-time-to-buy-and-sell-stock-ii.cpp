class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=INT_MAX,sell,profit=0;
        for(int i=0;i<n;i++){
            if(buy>prices[i])
                buy=prices[i];
            else{
                sell=prices[i];
                profit+=sell-buy;
                buy=prices[i];
            }
        }
        return profit;
    }
};