class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minimal=prices[0];
        int n = prices.size();
        for(int i=1;i<n;i++)
        {
           if(prices[i] > minimal)
           {
            maxprofit =max( maxprofit , prices[i]-minimal);
           }
           else
           {
            minimal = prices[i];
           }
        }

        return  maxprofit;
    }
};
