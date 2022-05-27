class Solution {
public:
    /*int f(int ind, int buy, vector<int> &prices, int n, vector<vector<int>> &dp){
        if(ind == n) return 0;
        if(dp[ind][buy] != -1) return dp[ind][buy];
        
        int profit = 0;
        
        if(buy){
            profit = max(-prices[ind]+f(ind+1, 0, prices, n, dp), 0+f(ind+1, 1, prices, n, dp));    
        }else{
            profit = max(prices[ind]+f(ind+1, 1, prices, n, dp), 0+f(ind+1, 0, prices, n, dp));
        }
        
        return dp[ind][buy] = profit;
    }*/
    /*
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        vector<int> ahead(2, 0), curr(2, 0);
        
        ahead[0] = ahead[1] = 0;
        
        for(int ind=n-1; ind>=0; ind--){
            for(int buy=0; buy<=1; buy++){
                int profit = 0;
                    if(buy){
                        profit = max(-prices[ind]+ahead[0], 0+ahead[1]); 
                    }else{
                        profit = max(prices[ind]+ahead[1], 0+ahead[0]);
                    }
                curr[buy] = profit;
            }
        }
        return ahead[1]; //0 is index starting and 1 is buy or dont buy
        
        */
    int maxProfit(vector<int>& prices){
        int profit = 0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i] > prices[i-1]){
                profit += prices[i] - prices[i-1];
            }
        }
        return profit;
    }
};
